/* 
 * File:   time_ctrl.h
 * Author: Sumson
 *
 * Created on 2018?6?12?, ??9:14
 */

#ifndef TIME_CTRL_H
#define	TIME_CTRL_H

#include "eusart.h"

#ifdef	__cplusplus
extern "C" {
#endif

#define TIME_CTRL_STOP  0x1C
#define TIME_CTRL_START 0x1D
#define TIME_CTRL_WORK  0x4E
<<<<<<< HEAD
#define TIME_CTRL_MODE  0X1F
=======
>>>>>>> master
#define TEST_QIR1       0x21
#define TEST_QIR2       0x22
#define TEST_QIR3       0x23
#define TEST_QIR4       0x24
#define TEST_QIR5       0x25
#define TEST_QIR6       0x26
#define TEST_QIR7       0x27
#define TEST_QIR8       0x28

extern uint16_t timeCtrlValue[8][4];
extern uint8_t timeCtrlStartFlag;
extern uint8_t timeCtrlOvertimeMask;
extern uint8_t IQRPreSta[8];
extern uint8_t IQRSta[8];
<<<<<<< HEAD
extern uint8_t timeCtrlMode;
extern uint8_t timeCtrlEnableSignal;
extern uint8_t readSignalflag;
=======
>>>>>>> master
//extern uint8_t testTimeCtrlFlag;
//extern uint8_t testTimeCtrlOvertimeMask;
//extern uint8_t testIQRNum;

void tempCtrlProcess(void);
//void testTimeCtrlProcess(uint8_t IQRNum);
void workTimeCtrl(void);
void startTimeCtrl(void);
void stopTimeCtrl(void);
void testTimeCtrl(uint8_t iqr_num);
void getTimeData(void);

#ifdef	__cplusplus
}
#endif

#endif	/* TIME_CTRL_H */

