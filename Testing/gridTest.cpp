#include "catch.hpp"
#include "golCatchMain.h"
#include "../Code/Lib/grid.hpp"
#include <iostream>
#include <vector>

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

