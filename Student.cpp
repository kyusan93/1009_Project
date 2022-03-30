#include "Student.h"
#include "Module.h"
#include <iomanip>
#include <iostream>
#include <cstdio>

using namespace std;

// Constructor
Student::Student(string name, string dateOfBirth, string gender, int contactNumber, string email, int studentId, Module* module)
: Person(name, dateOfBirth, gender, contactNumber, email){
  this->studentId = studentId;
  this->totalAmount = 10000;
  this->outstandingAmount = 10000;
  this->paymentStatus = false;
  for (int i=0; i < 5; ++i)
	{
	  this->module[i] = module[i];
    this->module[i].setGrade(0.0);
	}
}

// Getter
int Student::getStudentId() {
  return studentId;
}

double Student::getTotalAmount() {
  return totalAmount;
}

double Student::getOutstandingAmount() {
  return outstandingAmount;
}

bool Student::getPaymentStatus() {
  return paymentStatus;
}

// Setter
void Student::setStudentId(int studentId) {
  this->studentId = studentId;
}

void Student::setTotalAmount(double totalAmount) {
  this->totalAmount = totalAmount;
}

void Student::setOutstandingAmount(double outstandingAmount) {
  this->outstandingAmount = outstandingAmount;
}

void Student::setPaymentStatus(bool paymentStatus) {
  this->paymentStatus = paymentStatus;
}

double Student::getGradePointAverage() {
  
}

void Student::printInfo() {
  cout << "Type: Student" << endl;
  Person::printInfo();
  cout << "Student ID: " << studentId << endl;
}

void Student::write_data(string filename) { 
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
       << std::fixed << setprecision(2) << getTotalAmount() << ","
       << getOutstandingAmount() << ","
       << getPaymentStatus() << ","
       << getStudentId() << ","
       << "student" << ","
      << module[0].getModuleCode() << ","
      << module[0].getGrade() << ","
      << module[1].getModuleCode() << ","
      << module[1].getGrade() << ","
      << module[2].getModuleCode() << ","
      << module[2].getGrade() << ","
      << module[3].getModuleCode() << ","
      << module[3].getGrade() << ","
      << module[4].getModuleCode() << ","
      << module[4].getGrade()
      << endl;
  fout.close();
}

ofstream Student::update_data(string filename, string name, string dateOfBirth, string gender, int contactNumber, string email, double totalAmount, double outstandingAmount, bool paymentStatus, int studentId) { 
  // file pointer 
  ofstream fin, fout; 
  
  // Open an existing record 
  fin.open(filename, ios::in); 
  
  // Create a new file to store updated data 
  fout.open("temp.csv", ios::out);

  // fin.close(); 
  // fout.close(); 

  // // removing the existing file
  // remove(filename); 

  // // renaming the updated file with the existing file name 
  // rename("temp.csv", filename); 
  
  return fout;
}