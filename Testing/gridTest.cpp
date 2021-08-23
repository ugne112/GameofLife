#include "catch.hpp"
#include "golCatchMain.h"
#include "../Code/Lib/grid.hpp"
#include <iostream>
#include <vector>

TEST_CASE( "Check Grid is instantiated" ) 
{
  Grid g = Grid(5, 5);
  REQUIRE(g.getStatus(0,0) == '-');
}