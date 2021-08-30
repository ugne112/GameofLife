#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>
#include "grid.hpp"


class GameOfLife 
{
    private:
        Grid board;
    public:
        GameOfLife(Grid);
        void takeStep();
        void printGrid();

};

