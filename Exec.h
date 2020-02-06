//Exec.h

#include <iostream>
#include <string>
#include <fstream>

#ifndef EXEC_H
#define EXEC_H

class Exec
{
public:
  Exec(std::string file);

private:
  std::string file;
};

#endif
