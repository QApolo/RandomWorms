#include "headers/Movement.hpp"

Movement::Movement()
{
    
}
int Movement::discretePosition(double x, int decimalPlaces = 3)
{
    int shiftment = 1;
    while(decimalPlaces)
    {
        shiftment *= 10;
        decimalPlaces--;
    }
    return int(x * shiftment);
}

double Movement::evaluateValue(double x)
{
    return 0.0;
}