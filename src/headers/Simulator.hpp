#include "Worm.hpp"
#include "../gfx.h"
#include <vector>

class Simulator {
    private:
        int _width;
        int _height;
        int _totalWorms;
        int _totalTime;
        std::vector< Worm*> _worms;
    public:    
        void init();
        void plotWorm(Worm worm);
        void startSimulation();
        Simulator(int width, int height, int totalWorms, int totalTime);

};