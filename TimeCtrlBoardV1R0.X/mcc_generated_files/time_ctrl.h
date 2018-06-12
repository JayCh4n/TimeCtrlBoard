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

extern uint16_t timeCtrlValue[8][4];
extern uint8_t timeCtrlStartFlag;
extern uint8_t timeCtrlOvertimeMask;
extern uint8_t IQRPreSta[8];
extern uint8_t IQRSta[8];

void tempCtrlProcess(void);
void startTimeCtrl(void);
void stopTimeCtrl(void);
void getTimeData(void);

#ifdef	__cplusplus
}
#endif

#endif	/* TIME_CTRL_H */

