#include "Professor.h"
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <fstream>
#include <bits/stdc++.h>

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

void Professor::write_data(string filename)
{
  // file pointer 
  ofstream fout; 

  // opens an existing csv file or creates a new file. 
  fout.open(filename, ios::out | ios::app); 
    
  // Insert the data to file 
  fout << getName() << ","
       << getDateOfBirth() << ","
       << getGender() << ","
       << getContactNumber() << ","
       << getEmail() << ","
       << this->designation << ","
       << this->department << ","
       << std::fixed << std::setprecision(2) << this->salary << ","
       << ","
       << "staff"
       << endl;
  fout.close();
}

void Professor::update_data(string filename, int tempContactNumber,string name, string dateOfBirth, string gender, int contactNumber, string email, string designation, string department, double salary){};
