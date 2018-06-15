/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1828
        Driver Version    :  2.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set SIGNAL aliases
#define SIGNAL_TRIS                 TRISAbits.TRISA0
#define SIGNAL_LAT                  LATAbits.LATA0
#define SIGNAL_PORT                 PORTAbits.RA0
#define SIGNAL_WPU                  WPUAbits.WPUA0
#define SIGNAL_ANS                  ANSELAbits.ANSA0
#define SIGNAL_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define SIGNAL_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define SIGNAL_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define SIGNAL_GetValue()           PORTAbits.RA0
#define SIGNAL_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define SIGNAL_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define SIGNAL_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define SIGNAL_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define SIGNAL_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define SIGNAL_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED aliases
#define LED_TRIS                 TRISAbits.TRISA2
#define LED_LAT                  LATAbits.LATA2
#define LED_PORT                 PORTAbits.RA2
#define LED_WPU                  WPUAbits.WPUA2
#define LED_ANS                  ANSELAbits.ANSA2
#define LED_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED_GetValue()           PORTAbits.RA2
#define LED_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set ADDR_BIT_0 aliases
#define ADDR_BIT_0_TRIS                 TRISBbits.TRISB4
#define ADDR_BIT_0_LAT                  LATBbits.LATB4
#define ADDR_BIT_0_PORT                 PORTBbits.RB4
#define ADDR_BIT_0_WPU                  WPUBbits.WPUB4
#define ADDR_BIT_0_ANS                  ANSELBbits.ANSB4
#define ADDR_BIT_0_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define ADDR_BIT_0_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define ADDR_BIT_0_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define ADDR_BIT_0_GetValue()           PORTBbits.RB4
#define ADDR_BIT_0_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define ADDR_BIT_0_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define ADDR_BIT_0_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define ADDR_BIT_0_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define ADDR_BIT_0_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define ADDR_BIT_0_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()               do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()                do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()                do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()       do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()      do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set ADDR_BIT_1 aliases
#define ADDR_BIT_1_TRIS                 TRISBbits.TRISB6
#define ADDR_BIT_1_LAT                  LATBbits.LATB6
#define ADDR_BIT_1_PORT                 PORTBbits.RB6
#define ADDR_BIT_1_WPU                  WPUBbits.WPUB6
#define ADDR_BIT_1_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define ADDR_BIT_1_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define ADDR_BIT_1_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define ADDR_BIT_1_GetValue()           PORTBbits.RB6
#define ADDR_BIT_1_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define ADDR_BIT_1_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define ADDR_BIT_1_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define ADDR_BIT_1_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()               do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()                do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()                do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()       do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()      do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)

// get/set IQR1 aliases
#define IQR1_TRIS                 TRISCbits.TRISC0
#define IQR1_LAT                  LATCbits.LATC0
#define IQR1_PORT                 PORTCbits.RC0
#define IQR1_WPU                  WPUCbits.WPUC0
#define IQR1_ANS                  ANSELCbits.ANSC0
#define IQR1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IQR1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IQR1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IQR1_GetValue()           PORTCbits.RC0
#define IQR1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IQR1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IQR1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IQR1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IQR1_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define IQR1_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set IQR2 aliases
#define IQR2_TRIS                 TRISCbits.TRISC1
#define IQR2_LAT                  LATCbits.LATC1
#define IQR2_PORT                 PORTCbits.RC1
#define IQR2_WPU                  WPUCbits.WPUC1
#define IQR2_ANS                  ANSELCbits.ANSC1
#define IQR2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IQR2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IQR2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IQR2_GetValue()           PORTCbits.RC1
#define IQR2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IQR2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IQR2_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IQR2_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IQR2_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define IQR2_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set IQR3 aliases
#define IQR3_TRIS                 TRISCbits.TRISC2
#define IQR3_LAT                  LATCbits.LATC2
#define IQR3_PORT                 PORTCbits.RC2
#define IQR3_WPU                  WPUCbits.WPUC2
#define IQR3_ANS                  ANSELCbits.ANSC2
#define IQR3_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IQR3_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IQR3_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IQR3_GetValue()           PORTCbits.RC2
#define IQR3_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IQR3_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IQR3_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define IQR3_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define IQR3_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define IQR3_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set IQR4 aliases
#define IQR4_TRIS                 TRISCbits.TRISC3
#define IQR4_LAT                  LATCbits.LATC3
#define IQR4_PORT                 PORTCbits.RC3
#define IQR4_WPU                  WPUCbits.WPUC3
#define IQR4_ANS                  ANSELCbits.ANSC3
#define IQR4_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IQR4_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IQR4_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IQR4_GetValue()           PORTCbits.RC3
#define IQR4_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IQR4_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IQR4_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define IQR4_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define IQR4_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define IQR4_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set IQR5 aliases
#define IQR5_TRIS                 TRISCbits.TRISC4
#define IQR5_LAT                  LATCbits.LATC4
#define IQR5_PORT                 PORTCbits.RC4
#define IQR5_WPU                  WPUCbits.WPUC4
#define IQR5_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IQR5_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IQR5_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IQR5_GetValue()           PORTCbits.RC4
#define IQR5_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IQR5_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define IQR5_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define IQR5_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)

// get/set IQR6 aliases
#define IQR6_TRIS                 TRISCbits.TRISC5
#define IQR6_LAT                  LATCbits.LATC5
#define IQR6_PORT                 PORTCbits.RC5
#define IQR6_WPU                  WPUCbits.WPUC5
#define IQR6_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IQR6_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IQR6_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IQR6_GetValue()           PORTCbits.RC5
#define IQR6_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IQR6_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define IQR6_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define IQR6_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)

// get/set IQR7 aliases
#define IQR7_TRIS                 TRISCbits.TRISC6
#define IQR7_LAT                  LATCbits.LATC6
#define IQR7_PORT                 PORTCbits.RC6
#define IQR7_WPU                  WPUCbits.WPUC6
#define IQR7_ANS                  ANSELCbits.ANSC6
#define IQR7_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IQR7_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IQR7_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IQR7_GetValue()           PORTCbits.RC6
#define IQR7_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IQR7_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IQR7_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define IQR7_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define IQR7_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define IQR7_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set IQR8 aliases
#define IQR8_TRIS                 TRISCbits.TRISC7
#define IQR8_LAT                  LATCbits.LATC7
#define IQR8_PORT                 PORTCbits.RC7
#define IQR8_WPU                  WPUCbits.WPUC7
#define IQR8_ANS                  ANSELCbits.ANSC7
#define IQR8_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IQR8_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IQR8_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IQR8_GetValue()           PORTCbits.RC7
#define IQR8_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IQR8_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IQR8_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define IQR8_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define IQR8_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define IQR8_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/