#include "Point.hpp"

template <class T>
Point<T>::Point()
{
    _x = 0;
    _y = 0;
}

template <class T>
Point<T>::Point(T x, T y)
{
    _x = x;
    _y = y;
}

template <class T>
void Point<T>::setValueX(T x)
{
    _x = x;
}
template <class T>
void Point<T>::setValueY(T y)
{
    _y = y;
}
template <class T>
T Point<T>::getValueX()
{
    return _x;
}

 template <class T>
T Point<T>::getValueY()
{
    return _y;
}
void TemporaryFunction ()
{
    Point<double> TempObj;
}