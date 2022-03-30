#pragma once

#include <string>

using namespace std;

class Module {
  private:
  	string moduleName; 
  	int moduleCode;
  	int credit;
    double grade;
  public:
    Module();
    Module(string, int, int, int);

    // Getter
  	string getModuleName();
  	int getModuleCode();
  	int getCredit();
    double getGrade();

    // Setter
    void setModuleName(string);
    void setModuleCode(int);
  	void setCredit(int);
    void setGrade(double);
};