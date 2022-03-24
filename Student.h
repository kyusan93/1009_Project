#pragma once

#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Finance.h"
// #include "Module.h"

using namespace std;

class Student : public Person, public Finance {
  private:
    int studentId;
	  // Module moduleList[5];
   //  Finance finance;

  public:
    Student(string name, string dateOfBirth, string gender, int contactNumber, string email, double totalAmount, double outstandingAmount, bool paymentStatus, int studentId);

    // Getter
    int getStudentId();

    // Setter
    void setStudentId(int);
    // void setGradePointAverage(double);

    // Abstract printInfo ??? what is this OOP?
    void printInfo();
};

#endif