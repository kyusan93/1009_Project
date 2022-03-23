#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

class Professor : public Person {
  private:
    string designation;
    string department;
    double salary; 
  public:
    Professor(string, string, string, int, string, string, string, double);
    void setDesignation(string);
    string getDesignation();
    void setDepartment(string);
    string getDepartment();
    void setSalary(double);
    double getSalary(double);
    void displayProf();
};
