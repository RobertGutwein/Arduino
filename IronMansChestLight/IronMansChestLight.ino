/* Full documentation of library, @see https://learn.adafruit.com/adafruit-neopixel-uberguide/arduino-library */
#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(
  12, /**< Number of LEDs                !!! <<< TODO: Adapt here! */
  9,  /**< Arduino's PIN where attached. !!! <<< TODO: Adapt here!*/
    NEO_GRB 
  + NEO_KHZ800
  );

int red = 0;

void setup(){
  strip.begin();
  strip.setBrightness(64);
} /* setup */

void loop(){
  /** Change value in some simple way. Ensure data range */
  red = red + 10;
  if(red > 255){
     red = 0;
  }

  /** Set RGB color command over all pixels. */
  for(int i = 0; i < strip.numPixels(); ++i){
    strip.setPixelColor(i, 
      red, /**< red   */
      0,   /**< green */
      0    /**< blue  */
      ); 
  }
  strip.show();

  /** Time between color changes */
  delay(250);
} /* loop */

