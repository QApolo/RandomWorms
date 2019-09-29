#include "geometry/Point.hpp"
#include <vector>
#include "Movement.hpp"

class Worm {
    public:
        Worm(double angle, int direction, int lenght, Movement::MovementKind kind, Point<double> start);
        Movement *movement;
        std::vector <Point<double> *> shapePoints;
    private:
        double _angle;
        int _direction;
        int _lenght;
        //color
        Point <double> _startPoint;
};