#include "Person.h"

Person::Person(string name, string dateOfBirth, string gender, int contactNumber, string email) {
  this->name = name;
  this->dateOfBirth = dateOfBirth;
  this->gender = gender;
  this->contactNumber = contactNumber;
  this->email = email;
}
  
string Person::getName() {
  return this->name;
}

string Person::getDateOfBirth() {
  return this->dateOfBirth;
}

int Person::getContactNumber() {
  return this->contactNumber;
}

string Person::getEmail() {
  return this->email;
}