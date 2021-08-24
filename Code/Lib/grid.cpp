#include <iostream>
#include "grid.hpp"


Grid::Grid(int theRows, int theColumns) //initially all cells are set as dead
{
    rows = theRows;
    columns = theColumns;
    grid = std::vector<std::vector<char> > (theRows, std::vector<char>(theColumns, '-'));
    
}

Grid::Grid(int theRows, int theColumns, int theLiveCells) //initially all cells are set as dead
{
    rows = theRows;
    columns = theColumns;
    grid = std::vector<std::vector<char> > (theRows, std::vector<char>(theColumns, '-'));
    liveCells = theLiveCells;
    int x = 0;
    
    while (x < theLiveCells) // while loop to set alive cells as indicated by user
    {
        int i = std::rand() % theRows;
        int j = std::rand() % theColumns;
            
        if (grid[i][j] == 'o') // if loop to prevent setting one cell alive twice
        {
        }
        else
        {
            setStatus(i, j, 'o');
            x++;
        }
    }
        
}


char Grid::getStatus(int row, int column) //get status (dead or alive) of cell
{
    return grid[row][column];
}


void Grid::setStatus(int row, int column, char status) //set status (dead or alive) of each cell
{
    grid[row][column] = status;
}


void Grid::printGrid() 
{
       for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                std::cout << grid[i][j];
                std::cout << ' ';
            }
            std::cout << '\n';
        }
    std::cout << std::endl;
} 

