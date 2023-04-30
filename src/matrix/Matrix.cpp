#include "Matrix.h"

LedMatrix::LedMatrix() {
    CFastLED::addLeds<LED_TYPE, MATRIX_PIN, GRB>(this->leds, N_LEDS).setCorrection(TypicalLEDStrip);
}

void LedMatrix::setColor(size_t index, CRGB color) {
    this->leds[index] = color;
}

void LedMatrix::redraw() {
    FastLED.show();
}

void LedMatrix::clear() {
    FastLED.clear();
    FastLED.show();
}
