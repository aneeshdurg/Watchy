#ifndef ARDUINO_PINS_H
#define ARDUINO_PINS_H

// pins
#define SDA           21
#define SCL           22
#define BATT_ADC_PIN  34
#define RTC_INT_PIN   GPIO_NUM_27
#define DISPLAY_CS    5
#define DISPLAY_DC    10
#define DISPLAY_RES   9
#define DISPLAY_BUSY  19
#define VIB_MOTOR_PIN 13
#define MENU_BTN_PIN  26
#define BACK_BTN_PIN  25
#define UP_BTN_PIN    35
#define DOWN_BTN_PIN  4
#define MENU_BTN_MASK GPIO_SEL_26
#define BACK_BTN_MASK GPIO_SEL_25
#define UP_BTN_MASK   GPIO_SEL_35
#define DOWN_BTN_MASK GPIO_SEL_4
#define ACC_INT_MASK  GPIO_SEL_14
#define BTN_PIN_MASK  MENU_BTN_MASK | BACK_BTN_MASK | UP_BTN_MASK | DOWN_BTN_MASK

#endif
