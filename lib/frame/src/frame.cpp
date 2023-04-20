#include "frame.h"
#include "FastLED.h"

class Frame : public IFrame {
private:
    size_t shape;
    Pixel* pixes;

public:
    Frame(Pixel* pixes, size_t shape) {
        this->pixes = pixes;
        this->shape = shape;
    }

    Pixel get(int width, int height) override {
        size_t index = this->bias(width, height);
        return this->pixes[index];
    }

private:
    size_t bias(int width, int height) const {
        return (height * this->shape) + width;
    }
};