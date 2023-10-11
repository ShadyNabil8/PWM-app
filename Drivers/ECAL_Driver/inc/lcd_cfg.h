/*
 * lcd_cfg.h
 *
 *  Created on: Oct 11, 2023
 *      Author: shady
 */

#ifndef ECAL_DRIVER_INC_LCD_CFG_H_
#define ECAL_DRIVER_INC_LCD_CFG_H_

#include "stm32f1xx_hal.h"

#define _LCD_USE_FREERTOS 0
#define _LCD_USE_MENU_LIB 0

#define _LCD_COLS         20
#define _LCD_ROWS         2

#define _LCD_RS_PORT      GPIOB
#define _LCD_RS_PIN       GPIO_PIN_4

#define _LCD_E_PORT       GPIOB
#define _LCD_E_PIN        GPIO_PIN_3

#define _LCD_RW_PORT      GPIOB
#define _LCD_RW_PIN       LCD_RW_Pin

#define _LCD_D4_PORT      GPIOB
#define _LCD_D4_PIN		GPIO_PIN_5

#define _LCD_D5_PORT      GPIOB
#define _LCD_D5_PIN       GPIO_PIN_6

#define _LCD_D6_PORT      GPIOB
#define _LCD_D6_PIN       GPIO_PIN_7

#define _LCD_D7_PORT      GPIOB
#define _LCD_D7_PIN       GPIO_PIN_8

#endif /* ECAL_DRIVER_INC_LCD_CFG_H_ */
