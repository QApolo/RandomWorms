#include "headers/Worm.hpp"
#include "headers/OscillatorMovement.hpp"

Worm::Worm(double angle,
            int direction, 
            int lenght, 
            Movement::MovementKind kind, 
            Point <double> startPoint)
{
    _startPoint = startPoint;
    _direction = direction;
    _angle = angle;
    switch(kind)
    {
        case  Movement::MovementKind::oscillator:
            movement = new OscillatorMovement(3.2 /*amplitude*/, 0.1 /*frequency*/);
        break;
        case Movement::MovementKind::rotatory:
            //
        break;
        case Movement::MovementKind::straight:
            //
        break;
    }

    for(int j = 0; j < lenght; j++)
    {
        Point <double> *p;
        double x = startPoint.getValueX();
        double y = movement->evaluateValue(x) +  startPoint.getValueY();
        p = new Point<double>(x, y); //offset
        shapePoints.push_back(p);
    }
}
