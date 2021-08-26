#include "catch.hpp"
#include "golCatchMain.h"
#include "../Code/Lib/grid.hpp"
#include <iostream>
#include <vector>
/*
// Part A
// Q2
TEST_CASE( "Check Grid is instantiated" ) 
{
  Grid g = Grid(5, 5);
  g.printGrid();
  REQUIRE(g.getStatus(0,0) == '-');
}

// Q3
TEST_CASE( "Check alive cells are set randomly" ) 
{
  Grid g = Grid(5, 5, 20);
  g.printGrid();

  int alive_cells = 0; 
  for (int i = 0; i < 5; i++)
  {
      for (int j = 0; j < 5; j++)
      { 
        if (g.getStatus(i, j) == 'o')
        {
          alive_cells++;
        }
      }
  }
  REQUIRE(alive_cells == 20);
}
*/

// Q4
TEST_CASE("Read and print text files")
{
  Grid g = Grid("../Testing/Data/glider.txt");
  // Grid g1 = Grid("../Testing/Data/oscillators.txt");
 // Grid g2 = Grid("../Testing/Data/still_lifes.txt");
  
  // REQUIRE();
} 

// Q5

TEST_CASE("Count Live Neighbours of a cell")
{
  Grid g1 = Grid("../Testing/Data/glider.txt");
  
  REQUIRE(g1.liveNeighbours(1, 2) == 1);
  REQUIRE(g1.liveNeighbours(2, 2) == 3);
} 

