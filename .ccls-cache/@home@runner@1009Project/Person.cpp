#include "Person.h"
#include <iostream>

using namespace std;

// Constructor
Person::Person(string name, string dateOfBirth, string gender, int contactNumber, string email) {
  this->name = name;
  this->dateOfBirth = dateOfBirth;
  this->gender = gender;
  this->contactNumber = contactNumber;
  this->email = email;
}

// Getter
string Person::getName() {
  return this->name;
}

string Person::getDateOfBirth() {
  return this->dateOfBirth;
}
  
string Person::getGender() {
  return this->gender;
}

int Person::getContactNumber() {
  return this->contactNumber;
}

string Person::getEmail() {
  return this->email;
}

// Setter
void Person::setName(string name) {
  this->name = name;
}

void Person::setDateOfBirth(string dateOfBirth) {
  this->dateOfBirth = dateOfBirth;
}

void Person::setGender(string gender) {
  this->gender = gender;
}

void Person::setContactNumber(int contactNumber) {
  this->contactNumber = contactNumber;
}

void Person::setEmail(string email) {
  this->email = email;
}

// Abstract printInfo ??? what is this OOP?
void Person::printInfo() {
  cout << "Name: " << name << endl;
  cout << "Date of Birth: " << dateOfBirth << endl;
  cout << "Gender: " << gender << endl;
  cout << "Contact Number: " << contactNumber << endl;
  cout << "Email: " << email << endl;
};

ofstream Person::write_data(string filename, string name, string dateOfBirth, string gender, int contactNumber, string email, double totalAmount, double outstandingAmount, bool paymentStatus, int studentId) {};

ofstream Person::update_data(string filename, string name, string dateOfBirth, string gender, int contactNumber, string email, double totalAmount, double outstandingAmount, bool paymentStatus, int studentId) { 
  // // File pointer 
  // fstream fin, fout; 

  // // Open an existing record 
  // fin.open(filename, ios::in); 

  // // Create a new file to store updated data 
  // fout.open("temp.csv", ios::out);

  // int rollnum, roll1, marks, count = 0, i; 
  // char sub; 
  // int index, new_marks; 
  // string line, word; 
  // vector<string> row; 

  // // Get the roll number from the user 
  // cout << "Enter the roll number of the record to be updated: "; 
  // cin >> rollnum; 

  // // Get the data to be updated 
  // cout << "Enter the subject to be updated(M/P/C/B): "; 
  // cin >> sub;

  // cout << "Enter new marks: "; 
  // cin >> new_marks; 

  // // Traverse the file 
  // while (!fin.eof()) { 
  //     row.clear(); 
    
  //     getline(fin, line); 

  //     stringstream s(line); 

  //     while (getline(s, word, ', ')) { 
  //         row.push_back(word); 
  //     } 
    
  //     roll1 = stoi(row[0]); 
  //     int row_size = row.size(); 

  //     if (roll1 == rollnum) { 
  //         count = 1; 
  //         stringstream convert; 
        
  //         // sending a number as a stream into output string 
  //         convert << new_marks; 
        
  //         // the str() converts number into string 
  //         row[index] = convert.str(); 

  //         if (!fin.eof()) { 
  //             for (i = 0; i < row_size - 1; i++) { 

  //                 // write the updated data 
  //                 // into a new file 'reportcardnew.csv' 
  //                 // using fout 
  //                 fout << row[i] << ", "; 
  //             } 
  //             fout << row[row_size - 1] << "\n"; 
  //         } 
  //     } 
  //     else { 
  //         if (!fin.eof()) { 
  //             for (i = 0; i < row_size - 1; i++) { 
                
  //                 // writing other existing records 
  //                 // into the new file using fout. 
  //                 fout << row[i] << ", "; 
  //             } 

  //             // the last column data ends with a '\n' 
  //             fout << row[row_size - 1] << "\n"; 
  //         } 
  //     } 

  //     if (fin.eof()) break; 
  // } 

  // if (count == 0) 
  //     cout << "Record not found\n"; 

  // fin.close(); 
  // fout.close(); 

  // // removing the existing file
  // remove(filename); 

  // // renaming the updated file with the existing file name 
  // rename("temp.csv", filename); 
  // return fout;
}
