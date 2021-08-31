#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include <golMyFunctions.h>
#include <golExceptionMacro.h>
#include "grid.hpp"
#include "golClass.hpp"

// Command line app
static void show_usage(std::string name)
{
    std::cerr << "Usage: " << name << " <option(s)> SOURCES \n"
         << "Options:\n"
         << "\t-h,--help\t\tShow help message\n"
         << "\t-r,--random \t\tSpecify: number of rows; number of columns; number of initial live cells; number of generations.\n"
         << std::endl;
}


int main(int argc, char** argv)
{

    int returnStatus = EXIT_FAILURE;

    try
    {
        std::vector<std::string> params;
        std::cout << std::endl;

        if(argc < 2)
        {
            show_usage(argv[0]);
            return 1;
        }
    
        std::string arg = argv[1];
        if ((arg == "-h") || (arg == "--help")) 
        {
            show_usage(argv[0]);
            return 1;
        }

        else if((arg == "-r") || (arg == "--random"))
        {
            if(argc-2 == 4)
            {
                for(int i=2; i<argc; i++)
                    params.push_back(argv[i]);
            }
            else
            {
                std::cerr << arg << " option requires 4 parameters." << std::endl;
                return 1;
            }
        }

    // Parameters indicated by user are used to run the simulation

    // Still Lifes simulation generates multiple initial conditions and takes a step on each one
    // The purpose is to find an initial grid that doesn't change when a step is taken
        
        if(params.size() == 4) // Input indicated by user and live cells placed randomly
        { 
            int noGenerations = std::stoi(params.back()); // last member is the number of generations 
            for(int i=0; i< noGenerations; i++) // Walking through generation
            {
                Grid boardGrid = Grid(std::stoi(params[0]), std::stoi(params[1]), std::stoi(params[2]));
                GameOfLife game = GameOfLife(boardGrid);
                GameOfLife game2 = game;
                game.takeStep();
                game.printGrid();
                std::cout << "New grid + takeStep.\n"; 
                std::this_thread::sleep_for (std::chrono::seconds(1));
            }
        }

        returnStatus = EXIT_SUCCESS;
    }

  catch (gol::Exception& e)
  { 
    std::cerr << "Caught gol::Exception: " << e.GetDescription() << std::endl;
  }
  catch (std::exception& e)
  {
    std::cerr << "Caught std::exception: " << e.what() << std::endl;
  }

  return returnStatus;
  
}

