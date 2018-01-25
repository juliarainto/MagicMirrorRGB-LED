/* Code for RGB LED strip using FastLED library
 *  Arduino Nano circuit
 *  LED-Type WS2812B
 *  Author: Julia Rainto, 2018
 *  GitHub: juliarainto
 */

#include <FastLED.h>

#define LED_PIN     5
#define NUM_LEDS    50
#define LED_TYPE    WS2812B
#define COLOR_ORDER GBR
#define BRIGHTNESS  200

CRGB leds[NUM_LEDS];

void setup() {
    delay(1000);
    LEDS.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS);
    FastLED.setBrightness(BRIGHTNESS);
}

void loop()
{
  // Solid color stripe for 3s
  FastLED.clear();
  fill_solid(leds, NUM_LEDS, CRGB(255,0,0));
  FastLED.show();
  delay(3000);

  FastLED.clear();
  fill_solid(leds, NUM_LEDS, CRGB(0,0,255));
  FastLED.show();
  delay(3000);
  
  FastLED.clear();
  fill_solid(leds, NUM_LEDS, CRGB(255,255,0));
  FastLED.show();
  delay(3000);
  
  FastLED.clear();
  fill_solid(leds, NUM_LEDS, CRGB::Chartreuse);
  FastLED.show();
  delay(3000);
  
  FastLED.clear();
  fill_solid(leds, NUM_LEDS, CRGB(0,255,255));
  FastLED.show();
  delay(3000);

  FastLED.clear();
  fill_solid(leds, NUM_LEDS, CRGB::MediumVioletRed);
  FastLED.show();
  delay(3000);

  // specified LED is ON, with the specified color: HTML Named Colors
  FastLED.clear();

  leds[1] = CRGB::Cyan;
  leds[2] = CRGB::MediumVioletRed;
  leds[3] = CRGB::Cyan;
  leds[4] = CRGB::Chartreuse;
  leds[5] = CRGB::Cyan;
  leds[6] = CRGB::Chartreuse;
  leds[7] = CRGB::Cyan;
  leds[8] = CRGB::MediumVioletRed;
  leds[9] = CRGB::Cyan;
  leds[10] = CRGB::Chartreuse;
  leds[11] = CRGB::Cyan;
  leds[12] = CRGB::MediumVioletRed;
  leds[13] = CRGB::Chartreuse;
  leds[14] = CRGB::Cyan;
  leds[15] = CRGB::MediumVioletRed;
  leds[16] = CRGB::Cyan;
  leds[17] = CRGB::MediumVioletRed;
  leds[18] = CRGB::Cyan;
  leds[19] = CRGB::Chartreuse;
  leds[20] = CRGB::Cyan;
  leds[21] = CRGB::Chartreuse;
  leds[22] = CRGB::Cyan;
  leds[23] = CRGB::MediumVioletRed;
  leds[24] = CRGB::Cyan;
  leds[25] = CRGB::Chartreuse;
  leds[26] = CRGB::Cyan;
  leds[27] = CRGB::MediumVioletRed;
  leds[28] = CRGB::Chartreuse;
  leds[29] = CRGB::Cyan;
  leds[30] = CRGB::MediumVioletRed;
  leds[31] = CRGB::Chartreuse;
  leds[32] = CRGB::Cyan;
  leds[33] = CRGB::MediumVioletRed;
  leds[34] = CRGB::Cyan;
  leds[35] = CRGB::Chartreuse;
  leds[36] = CRGB::Cyan;
  leds[37] = CRGB::MediumVioletRed;
  leds[38] = CRGB::Chartreuse;
  leds[39] = CRGB::Cyan;
  leds[40] = CRGB::Chartreuse;
  leds[41] = CRGB::Cyan;
  leds[42] = CRGB::MediumVioletRed;
  leds[43] = CRGB::Chartreuse;
  leds[44] = CRGB::Cyan;
  leds[45] = CRGB::MediumVioletRed;
  leds[46] = CRGB::Cyan;
  leds[47] = CRGB::MediumVioletRed;
  leds[48] = CRGB::Cyan;
  leds[49] = CRGB::Chartreuse;
  leds[50] = CRGB::Cyan;

    
  FastLED.show();
  delay(3000);
  FastLED.clear();

//Solid pink stripe for 2s
  fill_solid(leds, NUM_LEDS, CRGB(255,0,144)); 
  FastLED.show();
  delay(2000);
  FastLED.clear();

// Blue srip animation
  for(int i=0;i<NUM_LEDS;i++){
    leds[i].setRGB(0,0,255); 
    FastLED.show();
    
    delay(20);
 }
 
  FastLED.clear();
  
 // Green strip animation
  FastLED.clear();

    for(int i=0;i<NUM_LEDS;i++){
    leds[i].setRGB(0,255,0);
    FastLED.show();
    delay(20);
 }
 
  FastLED.clear();
  
 // Red strip animation
  FastLED.clear();

    for(int i=0;i<NUM_LEDS;i++){
    leds[i].setRGB(255,0,0);
    FastLED.show();
    delay(20);
 }

 FastLED.clear();

 // Rainbow strip
  FastLED.clear();

 for(int i=0;i<NUM_LEDS;i++){
   fill_rainbow(leds,i, 0, 5);
   FastLED.show();
   delay(20);
 }
  FastLED.clear();
  
 // Specific amount of LEDs ON
  FastLED.clear();

 for(int i=0;i<NUM_LEDS;i++){   
   leds[i-1].setRGB(0,0,0);
   leds[i].setRGB(255,255,0);
   FastLED.show();
   delay(20);
 }
  FastLED.clear();

  FastLED.clear();

   for (int i = 0; i < NUM_LEDS; i++) {
    leds[i - 2].setRGB(0, 0, 0);
    leds[i].setRGB(86, 15, 196);
    FastLED.show();
    delay(20);
  }
  FastLED.clear();

  FastLED.clear();

  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i - 3].setRGB(0, 0, 0);
    leds[i].setRGB(255, 255, 0);
    FastLED.show();
    delay(20);
    }
  FastLED.clear();

    FastLED.clear();

  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i - 3].setRGB(0, 0, 0);
    leds[i].setRGB(255, 255, 0);
    FastLED.show();
    delay(20);
    }
  FastLED.clear();

    FastLED.clear();

  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i - 2].setRGB(0, 0, 0);
    leds[i].setRGB(221, 11, 81);
    FastLED.show();
    delay(20);
    }
  FastLED.clear();

    FastLED.clear();

  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i - 1].setRGB(0, 0, 0);
    leds[i].setRGB(86, 15, 192);
    FastLED.show();
    delay(20);
    }
  FastLED.clear();
}





