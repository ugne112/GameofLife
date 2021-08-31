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
        GameOfLife(Grid board);
        void takeStep();
        void printGrid();

};

