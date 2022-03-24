#include "Person.h"
#include <iostream>

using namespace std;

// Constructor
Person::Person(string name, string dateOfBirth, string gender, int contactNumber, string email) {
  this->name = name;
  this->dateOfBirth = dateOfBirth;
  this->gender = gender;
  this->contactNumber = contactNumber;
  this->email = email;
}

// Getter
string Person::getName() {
  return this->name;
}

string Person::getDateOfBirth() {
  return this->dateOfBirth;
}
  
string Person::getGender() {
  return this->gender;
}

int Person::getContactNumber() {
  return this->contactNumber;
}

string Person::getEmail() {
  return this->email;
}

// Setter
void Person::setName(string name) {
  this->name = name;
}

void Person::setDateOfBirth(string dateOfBirth) {
  this->dateOfBirth = dateOfBirth;
}

void Person::setGender(string gender) {
  this->gender = gender;
}

void Person::setContactNumber(int contactNumber) {
  this->contactNumber = contactNumber;
}

void Person::setEmail(string email) {
  this->email = email;
}

// Abstract printInfo ??? what is this OOP?
void Person::printInfo() {
  cout << "Name: " << name << endl;
  cout << "Date of Birth: " << dateOfBirth << endl;
  cout << "Gender: " << gender << endl;
  cout << "Contact Number: " << contactNumber << endl;
  cout << "Email: " << email << endl;
};