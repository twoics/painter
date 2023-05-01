#ifndef PAINTER_MATRIX_H
#define PAINTER_MATRIX_H

#include "FastLED.h"

#define LED_TYPE WS2812
#define MATRIX_PIN 6
#define N_ROW 16
#define N_COL 16
#define N_LEDS (N_COL * N_ROW)
#define INDEX_OUT_OF_RANGE (-1)

class LedMatrix {
private:
    CRGB leds[N_LEDS]{};

public:
    LedMatrix();

    void setColor(byte height, byte width, CRGB color);

    static void redraw();

    static void clear();

private:
    static int calculateIndex(byte height, byte width);
};

#endif //PAINTER_MATRIX_H
