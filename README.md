PHAS0100LSAAssignment1
------------------

[![Build Status](https://travis-ci.com/[USERNAME]/PHAS0100LSAAssignment1.svg?branch=master)](https://travis-ci.com/[USERNAME]/PHAS0100LSAAssignment1)
[![Build Status](https://ci.appveyor.com/api/projects/status/[APPVEYOR_ID]/branch/master)](https://ci.appveyor.com/project/[USERNAME]/PHAS0100LSAAssignment1)


Purpose
-------

This project serves as a starting point for the PHAS0100 LSA Assignment 1 Game of Life Simulation. coursework. It has a reasonable folder structure for [CMake](https://cmake.org/) based projects,
that use [CTest](https://cmake.org/) to run unit tests via [Catch](https://github.com/catchorg/Catch2). 

Further information on the specific project is left as an exercise for the student.


Credits
-------

This project is maintained by [Dr. Jim Dobson](https://www.ucl.ac.uk/physics-astronomy/people/dr-jim-dobson). It is based on [CMakeCatch2](https://github.com/UCL/CMakeCatch2.git) that was originally developed as a teaching aid for UCL's ["Research Computing with C++"](http://rits.github-pages.ucl.ac.uk/research-computing-with-cpp/)
course developed by [Dr. James Hetherington](http://www.ucl.ac.uk/research-it-services/people/james)
and [Dr. Matt Clarkson](https://iris.ucl.ac.uk/iris/browse/profile?upi=MJCLA42).


Build Instructions
------------------

Build and run instructions are left as an excercise for the student. Examples of how to build using cmake were given in lectures and in the other CMake example projects. 

Build Docker Image:
docker build -t container .

Run docker container for the first time:
docker run -it --name container -v "$(pwd)":/container container

Restart the container:
docker -i test

Once Inside the container navigate to build:
cd build 
And Run:
cmake ../
to build the Makefile. After that execute:
make
This will make all the binary files and you will get all the executables in build/bin.
Run the tests or the Command Line apps from there.

Run tests for Part A:
./bin/gridTest

Run tests for Part B:
./bin/golTest

Run Game Of Life Simulator app from input text file:
./bin/golSimulator -f <location/file.txt> <number_of_generations>

Run Game Of Life Simulator app by initialising the grid from user input:
./bin/golSimulator -r <number_of_rows> <number_of_columns> <number_of_live_cells> <number_of_generations>

Run Still Lifes app:
./bin/stillLifes -r <number_of_rows> <number_of_columns> <number_of_live_cells> <number_of_generations>