#include <iostream>
#include <string>
#include "Professor.h"

using namespace std;

class Module{
  private:
  	string moduleName; 
  	int moduleCode;
  	int credits;
  	Professor moduleIC;
  public:
    Module(string, int, int, Professor);
  	string getModuleName();
  	void setModuleName(string);
  	int getModuleCode();
  	void setModuleCode(int);
  	int getCredits();
  	void setCredits(int);
    Professor getProfessor();
  	void setProfessor(Professor);
}