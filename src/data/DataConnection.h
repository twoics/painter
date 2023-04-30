#ifndef PAINTER_DATACONNECTION_H
#define PAINTER_DATACONNECTION_H

#include "../../.pio/libdeps/uno/FastLED/src/pixeltypes.h"

class DataConnection {
public:
    /// Checks the connection for new data
    /// @return True - new data exist, False - else
    virtual bool isNewData() = 0;

    /// Update CRGB leds using new data into connection
    virtual void update(CRGB* leds) = 0;
};

#endif //PAINTER_DATACONNECTION_H
