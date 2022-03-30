#pragma once

#include <string>
#include <fstream>

using namespace std;

class Person {
  private:
    string name;
    string dateOfBirth;
    string gender;
    int contactNumber;
    string email;

  public:
    Person(string name, string dateOfBirth, string gender, int contactNumber, string email);

    // Getter
    string getName();
    string getDateOfBirth();
    string getGender();
    int getContactNumber();
    string getEmail();

    // Setter
    void setName(string);
    void setDateOfBirth(string);
    void setGender(string);
    void setContactNumber(int);
    void setEmail(string);

    // Abstract printInfo ??? what is this OOP?
    virtual void printInfo();
    virtual void write_data(string);
    virtual ofstream update_data(string, string, string, string, int, string, double, double, bool, int);
};