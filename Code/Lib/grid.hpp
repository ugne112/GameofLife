#ifndef GRID_HPP
#define GRID_HPP
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>


class Grid
{
    private:  
        int rows; // number of rows to make grid
        int columns; // number of columns for to make grid
        int liveCells; // number of cells that are randomly placed
        std::vector<std::vector<char> > grid; // grid is a 2D vector array of chars
    public:
        Grid(int rows, int columns); // constructors
        Grid(int rows, int columns, int liveCells);
        Grid(std::string filename);

        int liveNeighbours(int row, int column); // calculates number of live neighbours of a cell

        int getRows();
        int getColumns();
        char getStatus(int row, int column); // get status of a cell (dead or alive)
        void setStatus(int row, int column, char status);
        void printGrid(); 
};

#endif
