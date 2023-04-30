#ifndef PAINTER_MATRIX_H
#define PAINTER_MATRIX_H

#include "FastLED.h"

#define LED_TYPE WS2812
#define MATRIX_PIN 6
#define N_LEDS 256

class LedMatrix {
private:
    CRGB leds[N_LEDS]{};

public:
    LedMatrix();

    void setColor(size_t index, CRGB color);

    static void redraw();

    static void clear();
};

#endif //PAINTER_MATRIX_H
