#pragma once

#ifndef MODULE_H
#define MODULE_H

#include "Professor.h"

using namespace std;

class Module : public Professor {
  private:
  	string moduleName; 
  	int moduleCode;
  	int credit;
    double costOfModule;
    int grade;
  	Professor moduleIC;
  public:
    Module(string, int, int, Professor);
  	string getModuleName();
  	void setModuleName(string);
  	int getModuleCode();
  	void setModuleCode(int);
  	int getCredit();
  	void setCredit(int);
    double getCostOfModule();
    void setCostOfModule(double);
    Professor getProfessor();
  	void setProfessor(Professor);
}

#endif