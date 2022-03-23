#include <iostream>
#include <string>
#include "Person.h"
#include "Module.h"
#include "Finance.h"

using namespace std;

class Student : public Person{
  private:
    int idNum;
    string lastName;
	  Module moduleList[5];
    Finance finance;
  public:
    Student(int, St);
    void displayStudentData();
    void setIdNum(int);
    void setLastName(string);
    void setGradePointAverage(double);
};