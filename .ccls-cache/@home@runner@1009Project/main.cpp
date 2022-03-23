#include<iostream>
#include<string>

using namespace std;
// declaration section
class Student {
  private:
    int idNum;
    string lastName;
    double gradePointAverage;
  public:
    void displayStudentData();
    void setIdNum(int);
    void setLastName(string);
    void setGradePointAverage(double);
};

int main() {
  std::cout << "Hello World!\n";
}