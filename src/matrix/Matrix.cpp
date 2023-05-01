#include "Matrix.h"

LedMatrix::LedMatrix() {
    CFastLED::addLeds<LED_TYPE, MATRIX_PIN, GRB>(this->leds, N_LEDS).setCorrection(TypicalLEDStrip);
}

void LedMatrix::setColor(byte height, byte width, CRGB color) {
    byte index = calculateIndex(height, width);
    this->leds[index] = color;
}

void LedMatrix::redraw() {
    FastLED.show();
}

void LedMatrix::clear() {
    FastLED.clear();
    FastLED.show();
}

int LedMatrix::calculateIndex(byte height, byte width) {
    if (height < 0 | height >= N_ROW |
        width < 0 | width >= N_COL) {
        return INDEX_OUT_OF_RANGE;
    }

    byte startRowIdx = N_COL * height;

    byte index = 0;
    byte isEven = height % 2;

    /// If current row is not even
    index += isEven * (startRowIdx + (N_COL - width - 1));

    /// If current row is even
    index += (1 - isEven) * (startRowIdx + width);
    return index;
}
