#include "FastLED.h"

// How many leds in your strip?
#define NUM_LEDS 80

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 11
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
      // Uncomment/edit one of the following lines for your leds arrangement.
      // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
  	//  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
      // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
      
      // FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<P9813, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<APA102, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<DOTSTAR, RGB>(leds, NUM_LEDS);

       FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
}

void jingleBells(int duration){
  applyColorToEntireArray(CRGB::Red);
  delay(500);
  applyColorToEntireArray(CRGB::Green);
  delay(500);
  applyColorToEntireArray(CRGB::Blue);
  delay(1000);
  applyColorToEntireArray(CRGB::Red);
  delay(500);
  applyColorToEntireArray(CRGB::Green);
  delay(500);
  applyColorToEntireArray(CRGB::Blue);
  delay(1000);
  applyColorToEntireArray(CRGB::Red);
  delay(500);
  applyColorToEntireArray(CRGB::Yellow);
  delay(500);
  applyColorToEntireArray(CRGB::Green);
  delay(750);
  applyColorToEntireArray(CRGB::Blue);
  delay(250);
  applyColorToEntireArray(CRGB::Red);
  delay(2000);
  //pause
  applyColorToEntireArray(CRGB::Black);
  delay(4000);
}

void applyColorToEntireArray(CRGB color){
  //basic implementation by me
  for(int i = 0; i < NUM_LEDS; i++){
    // Turn the LED on, then pause
    leds[i] = color;
  }
  FastLED.show();
  //know and use the libraries! no workie!!!
  //fill_solid(&(leds[0]), NUM_LEDS, CRGB(50,0,200));
}

void loop() { 
  int duration = 500;
  jingleBells(duration);
}
