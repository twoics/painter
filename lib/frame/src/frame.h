#ifndef PAINTER_FRAME_H
#define PAINTER_FRAME_H

class Pixel {
private:
    int red_val;
    int green_val;
    int blue_val;
    int brightness_val;

public:
    Pixel(int red, int green, int blue, int brightness) {
        this->red_val = red;
        this->green_val = green;
        this->blue_val = blue;
        this->brightness_val = brightness;
    }

    int red() const {
        return this->red_val;
    }

    int green() const {
        return this->green_val;
    }

    int blue() const {
        return this->blue_val;
    }

    int brightness() const {
        return this->brightness_val;
    }
};

class IFrame {
public:
    virtual Pixel get(int width, int height) = 0;
};


#endif //PAINTER_FRAME_H

