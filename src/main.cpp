#include <Arduino.h>
#include "matrix/Matrix.h"


void setup() {
    auto* matrix = new LedMatrix();
    matrix->setColor(0, CRGB::Green);
    LedMatrix::redraw();
}

void loop() {
// write your code here
}