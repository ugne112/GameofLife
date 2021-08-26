#ifndef CELLSTATUS_HPP
#define CELLSTATUS_HPP
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <fstream>


class Grid
{
    private:  
        int rows;
        int columns; // determines number of rows and number of columns]
        int liveCells;
        // const char live = 'o'; //live cells
        // const char dead = '-'; //dead cells
        std::vector<std::vector<char> > grid;
    public:
        Grid(int rows, int columns);
        Grid(int rows, int columns, int liveCells);
        Grid(std::string filename);
        int liveNeighbours(int row, int column); //get no. of live neighbours of cell
        char getStatus(int row, int column); //get status of cell
        void setStatus(int row, int column, char status);
        void printGrid(); 
};



#endif