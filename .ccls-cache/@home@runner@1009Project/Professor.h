#pragma once

#include "Person.h"

using namespace std;

class Professor : public Person {
  private:
    string designation;
    string department;
    double salary; 

  public:
    Professor(string name, string dateOfBirth, string gender, int contactNumber, string email, string designation, string department, double salary);

    // Getter
    string getDesignation();
    string getDepartment();
    double getSalary();

    // Setter
    void setDesignation(string);
    void setDepartment(string);
    void setSalary(double);

    // Abstract printInfo ??? what is this OOP?
    void printInfo();
	void getStudentGPA(int studentList[], int studentID);
};