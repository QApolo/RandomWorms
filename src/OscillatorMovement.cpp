#include "headers/OscillatorMovement.hpp"

OscillatorMovement::OscillatorMovement(double amplitude, double frequency) 
{
    _amplitude = amplitude;
    _freq = frequency;
}
double OscillatorMovement::evaluateValue(double x)
{
    return _amplitude * (sin( x * _freq * M_PI));
}
