#include "Module.h"

Module::Module(){
  this->moduleName = "";
  this->moduleCode = 0;
  this->credit = 0;
  this->grade = 0.0;
}

Module::Module(string moduleName, int moduleCode, int credit, double grade){
  this->moduleName = moduleName;
  this->moduleCode = moduleCode;
  this->credit = credit;
  this->grade = grade;
}

// Getter
string Module::getModuleName() {
  return this->moduleName;
}

int Module::getModuleCode(){
  return this->moduleCode;
}

int Module::getCredit(){
  return this->credit;
}

double Module::getGrade(){
  return this->grade;
}

// Setter
void Module::setModuleName(string moduleName){
  this->moduleName = moduleName;
}

void Module::setModuleCode(int moduleCode){
  this->moduleCode = moduleCode;
}

void Module::setCredit(int credit){
  this->credit = credit;
}

void Module::setGrade(double grade){
  this->grade = grade;
}