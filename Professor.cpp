#include "Professor.h"
#include <iostream>

using namespace std;

// Constructor
Professor::Professor(string name, string dateOfBirth, string gender, int contactNumber, string email, string designation, string department, double salary) : Person(name, dateOfBirth, gender, contactNumber, email) {
  this->designation = designation;
  this->department = department;
  this->salary = salary;
}

// Getter
string Professor::getDesignation() {
  return designation;
}

string Professor::getDepartment() {
  return department;
}

double Professor::getSalary() {
  return salary;
}

// Setter
void Professor::setDesignation(string designation) {
  this->designation = designation;
}

void Professor::setDepartment(string department) {
  this->department = department;
}

void Professor::setSalary(double salary) {
  this->salary = salary;
}

// Abstract printInfo ??? what is this OOP?
void Professor::printInfo() {
  cout << "Type: Professor" << endl;
  Person::printInfo();
  cout << "Designation: " << designation << endl;
  cout << "Department: " << department << endl;
  cout << "Salary: " << salary << endl;
  cout << "\n" << endl;
}

