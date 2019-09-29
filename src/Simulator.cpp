#include "headers/Simulator.hpp"
#include "headers/geometry/Point.hpp"
#include <unistd.h>

using namespace std;

void Simulator::init()
{
    for(int j = 0; j < _totalWorms; j++)
    {
        Worm *w1;
        
        w1 = new Worm(0.0,//insert random angle [0, 90] degrees
                    0, //direction (0 or 1)
                    5, //random length [a, b]
                    Movement::MovementKind::oscillator, 
                    Point<double>(2.3, 3.4)); //insert double random values
        _worms.push_back(w1);
    }
}
void Simulator::plotWorm(Worm worm)
{
    //Movement::discretePosition(worm.shapePoints[0]->getValueY(), 3);
}
void Simulator::startSimulation()
{
    for(int t = 0; t < _totalTime; t++)
    {
        for(auto w: _worms)
        {
            Point<double> *startPoint = w->shapePoints[0];
            gfx_color(0,0,0); //black color
            gfx_point(startPoint->getValueX(), startPoint->getValueY());
            gfx_color(0,200,100); //go back to green color
            
            //erase last point
            if(!w->shapePoints.empty()) //pop front
                w->shapePoints.erase(w->shapePoints.begin());
    
            for(auto point: w->shapePoints)
            {
                //rotatePoint missing
                gfx_point(point->getValueX(), point->getValueY());//discreteValues
            }
            //insert_newPoint
            //w->shapePoints.push_back(Movement::discretePosition(x, y));   
        }
        gfx_flush();
        usleep(41666); //24 por segundo
    }
}
Simulator::Simulator(int width, int height, int totalWorms, int totalTime)
{
    gfx_open(width, height, "Worms:");
    _totalTime = totalTime;
    _totalWorms = totalWorms;
    gfx_color(0,200,100);
}

int main()
{
    Simulator s1(1366/*width*/, 768/*height*/, 20/*totalWorms*/, 5000/*totalTime*/);
    //s1.init();
    
    return 0;
}