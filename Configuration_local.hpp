/////////////////////////////////////////////////////////////////////////////////////////////////////////
// This configuration file was generated by the OAT Configurator at https://config.openastrotech.com for
// firmware Latest Official (V1.10.1).
// Save this as Configuration_local.hpp in the folder where you placed the firmware code.
// Unique ConfigKey: FW:O,HS:N,BD:M21,RS:N9,RD:TU,RAP900:O90:S8:T64:,RMSA3000:V1200:,RT:1,DS:N9,DD:TU,DAP900:O90:S16:T64:,DMSA3000:V1200:,DT:1,DY:LCD,GP:Y,LM:N,FC:N,AP:Y,AV:2,ZS:N8,ZD:TU,ZAP900:O90:H10:,ZAO:Y,LS:N8,LD:TU,LAP900:O90:H10:,LAO:N,AH:N

// We live in the Northern Hemisphere
#define NORTHERN_HEMISPHERE 1

// We are using the MKS GEN L V2.1 board
#if defined(BOARD) && BOARD != BOARD_AVR_MKS_GEN_L_V21
    #error Selected PIO environment does not match this configuration
#else
    #define BOARD BOARD_AVR_MKS_GEN_L_V21
#endif

////////////////////////////////
// RA Stepper configuration 
// See supported stepper values. Change according to the steppers you are using
// Using the NEMA 17, 0.9°/step stepper for RA
#define RA_STEPPER_TYPE STEPPER_TYPE_ENABLE

// Using the TMC2209-UART driver for RA stepper motor
#define RA_DRIVER_TYPE DRIVER_TYPE_TMC2209_UART

// Define some RA stepper motor settings
#define RA_MOTOR_CURRENT_RATING       900 // mA
#define RA_OPERATING_CURRENT_SETTING  90 // %
#define RA_SLEW_MICROSTEPPING         8
#define RA_TRACKING_MICROSTEPPING     64

// TMC2209 Stealth Mode (spreadCycle) - When set to 0, tracking is more precise, but noisy (high-pitched sound). When set to 1, they are silent.
#define RA_UART_STEALTH_MODE          1

// Is it going the wrong way?
#define RA_INVERT_DIR  0

// Define some RA stepper motor settings
#define RA_STEPPER_ACCELERATION 3000
#define RA_STEPPER_SPEED 1200

// Using the 16 tooth gear (recommended) for RA belt
#define RA_PULLEY_TEETH 16

////////////////////////////////
// DEC Stepper configuration 
// See supported stepper values. Change according to the steppers you are using
// Using the NEMA 17, 0.9°/step stepper for DEC
#define DEC_STEPPER_TYPE STEPPER_TYPE_ENABLE

// Using the TMC2209-UART driver for DEC stepper
#define DEC_DRIVER_TYPE DRIVER_TYPE_TMC2209_UART

// Define some DEC stepper motor settings
#define DEC_MOTOR_CURRENT_RATING       900 // mA
#define DEC_OPERATING_CURRENT_SETTING  90 // %
#define DEC_SLEW_MICROSTEPPING         16
#define DEC_GUIDE_MICROSTEPPING        64

// TMC2209 Stealth Mode (spreadCycle) - When set to 0, tracking is more precise, but noisy (high-pitched sound). When set to 1, they are silent.
#define DEC_UART_STEALTH_MODE          1

// Is it going the wrong way?
#define DEC_INVERT_DIR  1

// Define some DEC stepper motor settings
#define DEC_STEPPER_ACCELERATION 3000
#define DEC_STEPPER_SPEED 1200

// Using the 16 tooth gear (recommended) for DEC belt
#define DEC_PULLEY_TEETH 16

////////////////////////////////
// Display configuration 
// Define the type of display we are using. Currently: LCD Shield w/ keypad
#define DISPLAY_TYPE DISPLAY_TYPE_LCD_KEYPAD

////////////////////////////////
// GPS Addon configuration 
// Define whether we have the GPS addon or not. Currently: GPS NEO-6M
#define USE_GPS 1

////////////////////////////////
// Digital Level Addon configuration 
// Define whether we have the Digital Level or not. Currently: No Digital Level
#define USE_GYRO_LEVEL 0

////////////////////////////////
// Focuser configuration 
// Define whether to support a focusing stepper motor on E1 or not. Currently: No Focuser
// No Focuser settings

////////////////////////////////
// AutoPA Addon configuration 
// Define whether we have the AutoPA add on or not. Currently: AutoPA is installed

// Using AutoPA V2.0.
#define AUTOPA_VERSION 2

// Using the NEMA 17, 1.8°/step stepper for AZ
#define AZ_STEPPER_TYPE STEPPER_TYPE_ENABLED
#define AZ_STEPPER_SPR 200.0f

// Using the TMC2209-UART driver for AZ stepper motor
#define AZ_DRIVER_TYPE DRIVER_TYPE_TMC2209_UART

// Define AZ stepper motor power settings
#define AZ_MOTOR_CURRENT_RATING      900 // mA
#define AZ_OPERATING_CURRENT_SETTING 90 // %
#define AZ_MOTOR_HOLD_SETTING        10 // %

// Define AZ always-on
#define AZ_ALWAYS_ON 1

// Using the NEMA 17, 1.8°/step stepper for ALT
#define ALT_STEPPER_TYPE STEPPER_TYPE_ENABLED
#define ALT_STEPPER_SPR 200.0f

// Using the TMC2209-UART driver for ALT stepper motor
#define ALT_DRIVER_TYPE DRIVER_TYPE_TMC2209_UART

// Define ALT stepper motor power settings
#define ALT_MOTOR_CURRENT_RATING      900 // mA
#define ALT_OPERATING_CURRENT_SETTING 90 // %
#define ALT_MOTOR_HOLD_SETTING        10 // %

// Define ALT always-on
#define ALT_ALWAYS_ON 0

////////////////////////////////
// Is the RA Auto Home addon installed
#define USE_HALL_SENSOR_RA_AUTOHOME 0

///////////////////////
// Debug settings
#define DEBUG_LEVEL (DEBUG_NONE)

