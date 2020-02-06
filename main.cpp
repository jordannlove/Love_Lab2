//main.cpp

#include <iostream>
#include <string>
#include <fstream>

#include "Exec.h"

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    std::cout << "Invalid parameters - must type data file name after './Lab2'.\n";
  }
  else
  {
    std::string file = argv[1];
    Exec run(file); //create Exec object called run
  }
  return 0;
}
