// Copyright 2022 aaaa (@xxmeguxx)
// SPDX-License-Identifier: GPL-2.0-or-later
#include "config_common.h"


#pragma once

/*
 * キーボードのレイアウトの設定
 */
#define MATRIX_ROWS 3  // キーボードの行の数
#define MATRIX_COLS 4  // キーボードの列の数


/*
 * Display OLED SSD1306 128x32
 */
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_BRIGHTNESS 255
#define OLED_IC OLED_IC_SSD1306
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 32
#define OLED_TIMEOUT 31000


/*
 * キーボードの配線の変更
 * COLS: 列に使用するピンの指定, 左から右
 * ROWS: 行に使用するピンの指定, 上から下
 */
#define MATRIX_ROW_PINS { D4, C6, D7 }     
#define MATRIX_COL_PINS { F4, F5, F6, B1  } 


/*
 * LEDの明るさの設定
 */
#define BACKLIGHT_LEVELS 3
/*
 * LEDの制御ピンの設定
 * LEDの数の設定
 */
#define RGB_DI_PIN D3
//#define BACKLIGHT_PIN D3



#define RGBLIGHT_DEFAULT_HUE 100
#ifdef RGB_DI_PIN 
  #define RGBLED_NUM 9
  #define RGBLIGHT_ANIMATIONS
#endif
