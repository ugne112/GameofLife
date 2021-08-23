#include <iostream>
#include "grid.hpp"


Grid::Grid(int theRows, int theColumns) //initially all cells are set as dead
{
    rows = theRows;
    columns = theColumns;
    grid = std::vector<std::vector<char> > (theRows, std::vector<char>(theColumns, '-'));
}


char Grid::getStatus(int row, int column) //get status (dead or alive) of cell
{
    return grid[row][column];
}


void Grid::setStatus(int row, int column, char status) //set status (dead or alive) of each cell
{
    grid[row][column] = status;
}


