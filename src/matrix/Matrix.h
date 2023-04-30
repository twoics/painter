#ifndef PAINTER_MATRIX_H
#define PAINTER_MATRIX_H

#include "../../.pio/libdeps/uno/FastLED/src/pixeltypes.h"

class Matrix{
public:
    /// @return Pointer at matrix leds
    virtual CRGB* getLeds() = 0;

    /// Redraw leds on a matrix of LEDs
    virtual void redraw() = 0;
};

#endif //PAINTER_MATRIX_H
