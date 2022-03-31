#pragma once

#include "Person.h"

using namespace std;

class Professor : public Person {
  private:
    string designation;
    string department;
    double salary; 
    int staffId;

  public:
    Professor(string name, string dateOfBirth, string gender, int contactNumber, string email, string designation, string department, double salary, int staffId);

    // Getter
    string getDesignation();
    string getDepartment();
    double getSalary();
    int getStaffId();

    // Setter
    void setDesignation(string);
    void setDepartment(string);
    void setSalary(double);
    void setStaffId(int);

    // Abstract printInfo ??? what is this OOP?
    void printInfo();
	  void getStudentGPA(int studentList[], int studentID);

    void write_data(string);

    void update_data(string, int, string, string, string, int, string, string, string, double);
};