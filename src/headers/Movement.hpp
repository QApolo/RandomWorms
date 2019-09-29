#pragma once
class Movement {
    public:
        enum MovementKind: int {oscillator = 0, rotatory, straight};
        Movement();
        static int discretePosition(double x, int decimalPosition);
        virtual double evaluateValue(double x);
};