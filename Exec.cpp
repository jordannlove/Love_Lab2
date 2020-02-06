//Exec.cpp

#include <iostream>
#include <string>
#include <fstream>

#include"Exec.h"
#include "LinkedList.h"
#include"Hash.h"


Exec::Exec(std::string m_textFile)
{
  std::ifstream inFile;
  inFile.open(m_textFile); //open file passed from main
  if(!inFile.is_open())
  {
    std::cout << "File could not be opened.\n";
  }
  else
  {

  }
}
