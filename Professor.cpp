#include "Professor.h"

Professor::Professor(string name, string dateOfBirth, string gender, int contactNumber, string email, string designation, string department, double salary): Person(name, dateOfBirth, gender, contactNumber, email)
{
  this->designation = designation;
  this->department = department;
  this->salary = salary;
}

void Professor::setDesignation(string designation) {
  this->designation = designation;
}

string Professor::getDesignation(){
  return designation;
}

void Professor::setDepartment(string department) {
  this->department = department;
}

string Professor::getDepartment(){
  return department;
}

void Professor::setSalary(double salary) {
  this->salary = salary;
}

double Professor::getSalary(){
  return salary;
}

void Professor::displayProf()
{
  cout << "Profession Name: " << endl;
}

