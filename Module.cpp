#include "Module.h"

Module::Module(const string &ame, string moduleName, int moduleCode, int credit, double costOfModule, Professor moduleIC) {
  
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

int Module::getCredit(){
  return this->credit;
}

void Module::setCredit(int credit){
  this->credit = credit;
}

string Module::getCostOfModule() {
  return this->costOfModule;
}

void Module::setCostOfModule() {
  this->costOfModule = costOfModule;
}

Professor Module::getProfessor(){
  return this->credit;
}

void Module::setProfessor(Professor moduleIC){
  this->moduleIC = moduleIC;
}