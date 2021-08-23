#ifndef CELLSTATUS_HPP
#define CELLSTATUS_HPP
#include <iostream>
#include <string>
#include <vector>


class Grid
{
    private:  
        int rows;
        int columns; // determines number of rows and number of columns]
        int live_cells;
        const char live = 'o'; //live cells
        const char dead = '-'; //dead cells
        std::vector<std::vector<char> > grid;
    public:
        Grid(int rows, int columns);
        Grid(int rows, int columns, int liveCells);
        char getStatus(int row, int column); //get status of cell
        void setStatus(int row, int column, char status); 
};



#endif