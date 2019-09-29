#pragma once
template <class T>
class Point {
    private:
        T _x;
        T _y;
    public:
        Point();
        Point(T x, T y);
        void setValueX(T x);
        void setValueY(T y);

        T getValueX();
        T getValueY();
};