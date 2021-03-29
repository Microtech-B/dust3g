/**
 * @file lv_PM_25.h
 *
 */

#ifndef LV_PM_25_H
#define LV_PM_25_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
void lv_PM_25(void);
void update_temp_value(int temp_value);
void update_rh_value(int rh_value);
void update_aqi_value(int aqi_value);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_PM_25_H*/
