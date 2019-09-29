#include "gfx.h"
#include <unistd.h>
#include <math.h>
#include <stdio.h>  
#include <iostream>

using namespace std;

int mapped(int y, int height)
{

    return height - y;
}

pair <float, float> rotate(float x, float y, float angle)
{
    pair <float, float> point;
    angle = angle * M_PI / 180.0;
    point.first = x*cos(angle) - y*sin(angle);
    point.second = x*sin(angle) + y*cos(angle);
    return point;
}
int main()
{
    int t;
    gfx_open(800, 600, "Micro Animacion GFX");
    gfx_color(0,200,100);
    for(t = 0; t < 5000; t++){
        //gfx_clear();
        //gfx_line( t*1+80, t*2+40, t*2+40, t*3+80 );
        //gfx_line(t*5+80, t*3+40, t*3+40, t*5+80);
        
        int x = t+80;
       
        float y = 3.0*(sin(x/10.0* M_PI));

        pair<float, float> point = rotate(t, y, 30.0);
        gfx_point(point.first, point.second*1.0+100);

        point = rotate(t, y, 60.0);
        gfx_point(point.first, point.second*1.0+100);
        printf("%f\n", y);
       // gfx_point(floor(dt), y);

        //gfx_point(t+81, mappedY(t+80, 600));

       // gfx_point(t+40, mappedY(t+100, 600));
        //gfx_point(t+41, mappedY(t+100, 600));

       /*  gfx_color(0,200,100);
        gfx_point(t+60, t+60);
        gfx_color(0,0,0); */

        gfx_flush();
        
        usleep(41666); //24 por segundo
    }
 return 0;
}