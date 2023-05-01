#include <Arduino.h>
#include "matrix/Matrix.h"


void setup() {
    auto* matrix = new LedMatrix();
    matrix->setColor(5,0, CRGB(32,32,0));
    matrix->setColor(2,3, CRGB(32,0,0));
    matrix->setColor(15,1, CRGB(0,32,0));
    matrix->setColor(8,2, CRGB(11,32,0));
    LedMatrix::redraw();
}

void loop() {
// write your code here
}