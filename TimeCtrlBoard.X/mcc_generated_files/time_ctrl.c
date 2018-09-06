#include "time_ctrl.h"

uint16_t timeCtrlValue[8][4];
uint8_t timeCtrlStartFlag = 0;        //?????????? 0???  1???
uint8_t timeCtrlOvertimeMask = 0;     //???????????  10ms
uint8_t IQRPreSta[8] = {3,3,3,3,3,3,3,3};   //????????
uint8_t IQRSta[8] = {0};      //?????? ??8??? 0?T1  1?T2  2:T3 3:T4
//uint8_t testTimeCtrlFlag = 0;
//uint8_t testTimeCtrlOvertimeMask = 0;
//uint8_t testIQRNum = 0;
uint8_t testIQRSta[8] = {0};

void getTimeData(void)
{
    uint8_t i, j;
    uint8_t cnt = 0;
    for(i=0; i<8; i++)
    {
        for(j=0; j<4; j++)
        {
            timeCtrlValue[i][j] = eusartRxBuffer[cnt+5];
            timeCtrlValue[i][j] = (timeCtrlValue[i][j] << 8) 
                                    | eusartRxBuffer[cnt+6];
            cnt += 2;
        }
    }
}

void workTimeCtrl(void)
{
    uint8_t i;
    
    timeCtrlStartFlag = 0;
    LED_SetLow();
    
    for(i=0; i<8; i++)
    {
        IQRSta[i] = 0;
        testIQRSta[i] = 0;
        IQRPreSta[i] = 3;
        
        LATC |= 1 << i;
    }
}

void startTimeCtrl(void)
{
    getTimeData();
    stopTimeCtrl();
    timeCtrlStartFlag = 1;
}

void stopTimeCtrl(void)
{
    uint8_t i;
    timeCtrlStartFlag = 0;
    
    LED_SetHigh();
    
    for(i=0; i<8; i++)
    {
        IQRSta[i] = 0;
        testIQRSta[i] = 0;
        IQRPreSta[i] = 3;
        LATC &= ~(1<<i);
    }
}

void testTimeCtrl(uint8_t IQRNum)
{   
    testIQRSta[IQRNum - 1] ^= 0x01;
    
    if(testIQRSta[IQRNum - 1])
        LATC |= 1 << (IQRNum - 1);
    else
        LATC &= ~(1<<(IQRNum - 1));
//    uint8_t i;
//
//    testIQRNum = IQRNum;

//    for(i=0; i<4; i++)
//    {
//        timeCtrlValue[IQRNum - 1][i] = eusartRxBuffer[i * 2 + 5];
//        timeCtrlValue[IQRNum - 1][i] = (timeCtrlValue[IQRNum - 1][i] << 8) | eusartRxBuffer[i * 2 + 6];
//    }
//    testTimeCtrlFlag = 1;
}

//void testTimeCtrlProcess(uint8_t IQRNum)
//{
//    static uint16_t timeCnt = 0;
//    static uint8_t IQRSta = 0;
//    static uint8_t PreIQRSta = 3;
//    
//    if(IQRSta != PreIQRSta)
//    {
//        timeCnt = timeCtrlValue[IQRNum - 1][IQRSta];
//        PreIQRSta = IQRSta;
//    }
//
//    if(--timeCnt == 0)
//    {
//        if(IQRSta%2 == 0)
//        {
//            LATC |= 1 << (IQRNum - 1);
//        }
//        else if(IQRSta%2 == 1)
//        {
//            LATC &= ~(1 << (IQRNum - 1));
//        }
//
//        if(++IQRSta >= 4)
//        {
//            IQRSta = 0;
//            testTimeCtrlFlag = 0;
//        }
//    }
//}

void tempCtrlProcess(void)
{
    uint8_t i;
    static uint16_t timeCnt[8] = {0};
    
    for(i=0; i<8; i++)
    {
        if(IQRPreSta[i] != IQRSta[i])
        {
            switch(IQRSta[i])
            {
                case 0: timeCnt[i] = timeCtrlValue[i][0]; break;
                case 1: timeCnt[i] = timeCtrlValue[i][1]; break;
                case 2: timeCnt[i] = timeCtrlValue[i][2]; break;
                case 3: timeCnt[i] = timeCtrlValue[i][3]; break;
                default: break;
            }
            
            IQRPreSta[i] = IQRSta[i];
        }
        
        if(--timeCnt[i] == 0)
        {
            if(IQRSta[i]%2 == 0)
            {
                LATC |= 1 << i;
            }
            else if(IQRSta[i]%2 == 1)
            { 
                LATC &= ~(1<<i);   
            }
            
            if(++IQRSta[i] >= 4)
            {
                IQRSta[i] = 3;
            }
        }
    }
    
}