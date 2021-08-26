#include "catch.hpp"
#include "golCatchMain.h"
#include "../Code/Lib/grid.hpp"
#include "../Code/Lib/golClass.hpp"

TEST_CASE("gol takes step")
{
  Grid g1 = Grid("../Testing/Data/glider.txt");
  GameOfLife game1 = GameOfLife(g1);

  game1.takeStep();
  
  // REQUIRE(g1.liveNeighbours(1, 2) == 1);
}

