#include <math.h>
#include "Movement.hpp"

class OscillatorMovement : public Movement{
    /**
     * _amplitude * (sin(x / freq * M_PI));
    */
    public:
        OscillatorMovement(double amplitude, double frequency);
        double evaluateValue(double x);
        int discretePosition(double x, int decimalPlaces = 3);
    private:
        double _amplitude;
        double _freq;
    
};