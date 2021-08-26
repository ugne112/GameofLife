#include "golClass.hpp"

GameOfLife::GameOfLife(Grid gridBoard) : board(gridBoard)
{
}

void GameOfLife::takeStep()
{
    
    Grid board2 = board;
    for (int row = 0; row < board.getRows(); row++)
    {
        for (int column = 0; column < board.getRows(); column++)
        {
        // A dead cell becomes alive when it has exactly three neighbours
            if (board.getStatus(row, column)  == '-' && board.liveNeighbours(row, column) == 3)
            {
                board2.setStatus(row, column, 'o');
            }
        // A live cell with two or three live neighbours stays alive (no change)

        // A live cell dies with fewer than 2 neighbours
            if (board.getStatus(row, column) == 'o' && board.liveNeighbours(row, column) < 2)
            {
                board2.setStatus(row, column, '-');
            }
        // A live cell dies with more than three neighbours
            if (board.getStatus(row, column) == 'o' && board.liveNeighbours(row, column) > 3)
            {
                board2.setStatus(row, column, '-');
            }
        
        }
    }
    return board2.printGrid();
} 

void GameOfLife::printGrid()
{
    board.printGrid();
}


