#pragma once

#include <fstream>
#include "Person.h"
#include "Module.h"

using namespace std;

class Student : public Person {
  private:
    int studentId;
    double totalAmount;
    double outstandingAmount;
    bool paymentStatus;
	  Module module[5];

  public:
    Student(string name, string dateOfBirth, string gender, int contactNumber, string email, double totalAmount, double outstandingAmount, bool paymentStatus, int studentId, Module module[5]);
    Student(string name, string dateOfBirth, string gender, int contactNumber, string email, int studentId, Module module[5]);

    // Getter
    int getStudentId();
    double getTotalAmount();
    double getOutstandingAmount();
    bool getPaymentStatus();
    Module* getModule();

    // Setter
    void setStudentId(int);
    void setTotalAmount(double);
    void setOutstandingAmount(double);
    void setPaymentStatus(bool);
	
    double getGradePointAverage();

    void printInfo();

    //ofstream write_data(string, string, string, string, int, string, double, double, bool, int);
    void write_data(string);

    ofstream update_data(string, string, string, string, int, string, double, double, bool, int);
};
