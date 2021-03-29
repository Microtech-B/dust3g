#include "../lvgl/src/lvgl.h"
#include "../TFT_eSPI/TFT_eSPI.h"

#ifndef DISPLAY_H
#define DISPLAY_H

#define px_hor  480
#define px_ver  320 

void lcd_init();
void lcd_run();


#endif