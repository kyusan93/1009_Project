#include <iostream>
#include<string>

using namespace std;

class Person {
  private:
    string name;
    string dateOfBirth;
    string gender;
    int contactNumber;
    string email;
  public:
    Person(string, string, string, int, string);
    string getName();
    string getDateOfBirth();
    int getContactNumber();
    string getEmail();
};