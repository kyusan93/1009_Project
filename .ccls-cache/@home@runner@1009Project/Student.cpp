#include "Student.h"
#include "Finance.h"
#include <iostream>

using namespace std;

// Constructor
Student::Student(string name, string dateOfBirth, string gender, int contactNumber, string email, double totalAmount, double outstandingAmount, bool paymentStatus, int studentId)
: Person(name, dateOfBirth, gender, contactNumber, email), Finance(totalAmount, outstandingAmount, paymentStatus) {
  this->studentId = studentId;
}

// Getter
int Student::getStudentId() {
  return studentId;
}

// Setter
void Student::setStudentId(int studentId) {
  this->studentId = studentId;
}

// void Student::setGradePointAverage(double)

// Abstract printInfo ??? what is this OOP?
void Student::printInfo() {
  cout << "Type: Student" << endl;
  Person::printInfo();
  cout << "Student ID: " << studentId << endl;
  Finance::printInfo();
  cout << "\n" << endl;
}