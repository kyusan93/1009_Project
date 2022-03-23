#include "Module.h"

Module::Module(string moduleName, int moduleCode, int credits, Professor moduleIC) {
  this->moduleName = moduleName;
  this->moduleCode = moduleCode;
  this->credits = credits;
  this->moduleIC = moduleIC;
}

string Module::getModuleName() {
  return this->moduleName;
}

void Module::setModuleName(string moduleName){
  this->moduleName = moduleName;
}

int Module::getModuleCode(){
  return this->moduleCode;
}

void Module::setModuleCode(int moduleCode){
  this->moduleCode = moduleCode;
}

int Module::getCredits(){
  return this->credits;
}

void Module::setCredits(int credits){
  this->credits = credits;
}

Professor Module::getCredits(){
  return this->credits;
}

void Module::setCredits(int){
  return this->credits;
}