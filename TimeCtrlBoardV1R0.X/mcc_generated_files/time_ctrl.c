#include "time_ctrl.h"

uint16_t timeCtrlValue[8][4];
uint8_t timeCtrlStartFlag = 0;        //?????????? 0???  1???
uint8_t timeCtrlOvertimeMask = 0;     //???????????  10ms

void getTimeData(void)
{
    uint8_t i, j;
    
    for(i=0; i<8; i++)
    {
        for(j=0; j<4; j++)
        {
            timeCtrlValue[i][j] = eusartRxBuffer[i*4+j];
        }
    }
}

void statTimeCtrl(void)
{

}

void stopTimeCtrl(void)
{
    
}

void tempCtrlProcess(void)
{
    uint8_t i;
    static uint16_t timeCnt[8] = {0};
    static uint8_t IQRPreSta[8] = {3,3,3,3,3,3,3,3};   //????????
    static uint8_t IQRSta[8] = {0};      //?????? ??8??? 0?T1  1?T2  2:T3 3:T4
    
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
        }
        
        IQRPreSta[i] = IQRSta[i];
        
        if(--timeCnt[i] == 0)
        {
            if(IQRSta[i]%2 == 0)
            {
                LATC &= ~(1<<i);
            }
            
            else if(IQRSta[i]%2 == 1)
            { 
                LATC |= 1<<i;  
            }
            
            if(++IQRSta[i] >= 4)
            {
                IQRSta[i] = 0;
            }
        }
    }
    
}