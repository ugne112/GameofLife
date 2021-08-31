#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include "grid.hpp"

// a hyphen '-' represents a dead cell
// an 'o' represents a live cell


// Constructors for grid specs set by user

Grid::Grid(int theRows, int theColumns) // initially all cells are set as dead
{
    rows = theRows;
    columns = theColumns;
    grid = std::vector<std::vector<char> > (theRows, std::vector<char>(theColumns, '-'));
    
}


Grid::Grid(int theRows, int theColumns, int theLiveCells) 
// given number of live cells are set randomly across grid
{
    rows = theRows;
    columns = theColumns;
    grid = std::vector<std::vector<char> > (theRows, std::vector<char>(theColumns, '-'));
    liveCells = theLiveCells;
    int x = 0;
    
   
    while (x < theLiveCells) // while loop for live cells as indicated by user 
    {
        int i = std::rand() % theRows;
        int j = std::rand() % theColumns;
            
        if (grid[i][j] == 'o') // if statement to prevent setting one cell alive more than once
        {
        }
        else // a dead cell is set to be live
        {
            setStatus(i, j, 'o');
            x++;
        }
    }
    printGrid();     
}

// Constructor for reading the grid from a text file

Grid::Grid(std::string filename) 
{
    std::ifstream myFile;
    std::string line;
    std::vector <char> initGrid;
    grid.clear();
    myFile.open(filename, std::ios::in);
    
    if(myFile.is_open())
    {
        rows = 0;
        while(getline(myFile, line))
        {
            columns = 0;
            for(int i=0; i<line.length();i++)
            {
                if(line[i] != ' ')
                {
                    initGrid.push_back(line[i]);
                    columns++;
                }
            }
            grid.push_back(initGrid);
            initGrid.clear();
            rows++;
        }
        myFile.close();
        printGrid();
    }

}

// Calculating live neighbours of each cell

int Grid::liveNeighbours(int row, int column)
    {
        int neighbours = 0;
        // Row above the cell
        if (row - 1 >= 0)
        {
            if (column - 1 >= 0 && abs(grid[row - 1][column - 1]) == 'o')
                neighbours++;
            if (abs(grid[row - 1][column]) == 'o')
                neighbours++;
            if (column + 1 < grid[row - 1].size() && abs(grid[row - 1][column + 1]) == 'o')
            {
                neighbours++;
            }
        }
        // The cells on left and right side of given cell
        if (column - 1 >= 0 && abs(grid[row][column - 1]) == 'o')
            neighbours++;
        if (column + 1 < grid[row].size() && abs(grid[row][column + 1]) == 'o')
            neighbours++;

        // Row below the cell
        if (row + 1 < grid.size())
        {
            if (column - 1 >= 0 && abs(grid[row + 1][column - 1]) == 'o')
                neighbours++;
            if (grid[row + 1][column] == 'o')
                neighbours++;
            if (column + 1 < grid[row].size() && abs(grid[row + 1][column + 1]) == 'o')
                neighbours++;
        }
        return neighbours;
    }

int Grid::getRows() 
{
    return rows;
}

int Grid::getColumns() 
{
    return columns;
}

char Grid::getStatus(int row, int column) // get status (dead or alive) of cell
{
    return grid[row][column];
}


void Grid::setStatus(int row, int column, char status) // set status (dead or alive) of each cell
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

