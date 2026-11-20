/*Using LVGL with Arduino requires some extra steps:
 *Be sure to read the docs here: https://docs.lvgl.io/master/get-started/platforms/arduino.html  */

#include "Display_SPD2010.h"
#include "Audio_PCM5101.h"
#include "RTC_PCF85063.h"
#include "Gyro_QMI8658.h"
#include "LVGL_Driver.h"
#include "MIC_MSM.h"
#include "PWR_Key.h"
#include "SD_Card.h"
#include "LVGL_Example.h"
#include "BAT_Driver.h"


void Driver_Loop(void *parameter)
{
  Wireless_Test2();
  while(1)
  {
    PWR_Loop();
    QMI8658_Loop();
    PCF85063_Loop();
    BAT_Get_Volts();
    vTaskDelay(pdMS_TO_TICKS(100));
  }
}
void Driver_Init()
{
  Flash_test();
  PWR_Init();
  BAT_Init();
  I2C_Init();
  TCA9554PWR_Init(0x00);   
  Backlight_Init();
  Set_Backlight(50);      //0~100 
  PCF85063_Init();
  QMI8658_Init(); 
  
}
void setup()
{
  Driver_Init();

  SD_Init();
  Audio_Init();
  MIC_Init();
  LCD_Init();
  Lvgl_Init();

  Lvgl_Example1();
  // lv_demo_widgets();
  // lv_demo_benchmark();
  // lv_demo_keypad_encoder();
  // lv_demo_music();
  // lv_demo_printer();
  // lv_demo_stress();
  
  xTaskCreatePinnedToCore(
    Driver_Loop,     
    "Other Driver task",   
    2048,                
    NULL,                 
    3,                    
    NULL,                
    0                    
  );
}
void loop() {
  Lvgl_Loop();
  vTaskDelay(pdMS_TO_TICKS(5));

}
