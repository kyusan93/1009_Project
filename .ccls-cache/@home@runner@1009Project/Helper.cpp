#include "Helper.h"
#include "RapidCSV.h"

#include "Person.h"
#include "Student.h"
#include "Professor.h"
#include "Module.h"

#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

void clear_screen() {
  #ifdef WINDOWS
    system("cls");
  #else
    // Assume POSIX
    system("clear");
  #endif
}

void newStudentRecord()
{
  string name, dateOfBirth, gender, email;
  int contactNumber, studentId;
  double totalAmount, outstandingAmount;
  bool paymentStatus;
  Module module[5];

  cout << "Enter Student Name: " << endl;
  // cin >> name;
  name = "Phua Min Yao";
  cout << "Enter Student DOB: " << endl;
  // cin >> dateOfBirth;
  dateOfBirth = "01/01/1999";
  cout << "Enter Student Gender: " << endl;
  // cin >> gender;
  gender = "Male";
  cout << "Enter Student Contact Number: " << endl;
  // cin >> contactNumber;
  contactNumber = 91234567;
  cout << "Enter Student Email: " << endl;
  // cin >> email;
  email = "2100680@sit.SingaporeTech.edu.sg";
  cout << "Enter Student Total Fees: " << endl;
  // cin >> totalAmount;
  totalAmount = 1000.00;
  cout << "Enter Student Outstanding Fees: " << endl;
  // cin >> paymentStatus;
  paymentStatus = false;
  cout << "Enter Student Payment Status: " << endl;
  // cin >> outstandingAmount;
  outstandingAmount = 1000.00;
  cout << "Enter Student ID: " << endl;
  // cin >> studentId;
  studentId = 2100680;
  cout << "Enter Module 1: " << endl;
  // cin >> studentId;
  module[0].setModuleCode(1001);
  cout << "Enter Module 2: " << endl;
  // cin >> studentId;
  module[1].setModuleCode(1002);
  cout << "Enter Module 3: " << endl;
  // cin >> studentId;
  module[2].setModuleCode(1003);
  cout << "Enter Module 4: " << endl;
  // cin >> studentId;
  module[3].setModuleCode(1004);
  cout << "Enter Module 5: " << endl;
  // cin >> studentId;
  module[4].setModuleCode(1005);

  Person *studentObj =
      new Student(name, dateOfBirth, gender, contactNumber, email, studentId, module);

  studentObj->write_data("person.dat");
}

void newStaffRecord()
{
  // (string name, string dateOfBirth, string gender, int contactNumber, string email, string designation, string department, double salary)
  
  string name, dateOfBirth, gender, email, designation, department;
  int contactNumber, staffId;
  double salary;

  cout << "Enter Staff Name: " << endl;
  // cin >> name;
  name = "Phua Min Yao";
  cout << "Enter Staff DOB: " << endl;
  // cin >> dateOfBirth;
  dateOfBirth = "01/01/1999";
  cout << "Enter Staff Gender: " << endl;
  // cin >> gender;
  gender = "Male";
  cout << "Enter Staff Contact Number: " << endl;
  // cin >> contactNumber;
  contactNumber = 91234567;
  cout << "Enter Staff Email: " << endl;
  // cin >> email;
  email = "abcdef@sit.SingaporeTech.edu.sg";
  cout << "Enter Staff Designation: " << endl;
  // cin >> designation;
  designation = "Professor";
  cout << "Enter Staff Department: " << endl;
  // cin >> department;
  department = "ICT";
  cout << "Enter Staff Salary: " << endl;
  // cin >> salary;
  salary = 10000.10;
  cout << "Enter Staff ID: " << endl;
  // cin >> salary;
  staffId = 210001;

  Professor *staffObj =
      new Professor(name, dateOfBirth, gender, contactNumber, email, designation, department, salary, staffId);

  staffObj->write_data("person.dat");
}

void printAllStudents(string filename)
{
    // int colWidth = 30;
    // rapidcsv::Document doc("person.dat", rapidcsv::LabelParams(-1, -1));
    // const size_t rowCount = doc.GetRowCount();
    // cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
    // cout << setfill(' ') << fixed;
    // cout << setw(3 * colWidth) << "STUDENT INFORMATION" << endl;
    // cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
    // cout << setfill(' ') << fixed;
    // for (size_t i = 0; i < rowCount; ++i) {
    //     vector<string> row = doc.GetRow<string>(i);
    //     if (row[9] == "student") {
    //         cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
    //         cout << setfill(' ') << fixed;
    //         cout << setw(colWidth) << "Name:" << setw(2 * colWidth) << row[0]
    //             << endl;
    //         cout << setw(colWidth) << "Date of Birth:" << setw(2 * colWidth)
    //             << row[1] << endl;
    //         cout << setw(colWidth) << "Gender:" << setw(2 * colWidth) << row[2]
    //             << endl;
    //         cout << setw(colWidth) << "Contact Number:" << setw(2 * colWidth)
    //             << row[3] << endl;
    //         cout << setw(colWidth) << "Email:" << setw(2 * colWidth) << row[4]
    //             << endl;
    //         cout << setw(colWidth) << "Total Fees (SGD$):" << setw(2 * colWidth)
    //             << row[5] << endl;
    //         cout << setw(colWidth) << "O/S Amount (SGD$):" << setw(2 * colWidth)
    //             << row[6] << endl;
    //         cout << setw(colWidth) << "Payment Made:" << setw(2 * colWidth)
    //             << row[7] << endl;
    //         cout << setw(colWidth) << "Student ID:" << setw(2 * colWidth)
    //             << row[8] << endl;
    //         cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
    //         cout << endl;
    //     }
    // }
  
  // Without RapidCSV
  int colWidth = 30;
  cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
  cout << setfill(' ') << fixed;
  cout << setw(3 * colWidth) << "STUDENT INFORMATION" << endl;
  cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
  cout << setfill(' ') << fixed;
  vector<Student> students = loadStudents(filename);
  for (auto row: students) {
    cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
    cout << setfill(' ') << fixed;
    cout << setw(colWidth) << "Name:" << setw(2 * colWidth) << row.getName()
        << endl;
    cout << setw(colWidth) << "Date of Birth:" << setw(2 * colWidth)
        << row.getDateOfBirth() << endl;
    cout << setw(colWidth) << "Gender:" << setw(2 * colWidth) << row.getGender()
        << endl;
    cout << setw(colWidth) << "Contact Number:" << setw(2 * colWidth)
        << row.getContactNumber() << endl;
    cout << setw(colWidth) << "Email:" << setw(2 * colWidth) << row.getEmail()
        << endl;
    cout << setw(colWidth) << "Total Fees (SGD$):" << setw(2 * colWidth)
        << std::fixed << std::setprecision(2) << row.getTotalAmount() << endl;
    cout << setw(colWidth) << "O/S Amount (SGD$):" << setw(2 * colWidth)
        << std::fixed << std::setprecision(2) << row.getOutstandingAmount() << endl;
    cout << setw(colWidth) << "Payment Made:" << setw(2 * colWidth)
        << row.getPaymentStatus() << endl;
    cout << setw(colWidth) << "Student ID:" << setw(2 * colWidth)
        << row.getStudentId() << endl;
    cout << setw(colWidth) << "Module 1:" << setw(2 * colWidth)
        << (row.getModule())[0].getModuleCode() << endl;
    cout << setw(colWidth) << "Module 2:" << setw(2 * colWidth)
        << (row.getModule())[1].getModuleCode() << endl;
    cout << setw(colWidth) << "Module 3:" << setw(2 * colWidth)
        << (row.getModule())[2].getModuleCode() << endl;
    cout << setw(colWidth) << "Module 4:" << setw(2 * colWidth)
        << (row.getModule())[3].getModuleCode() << endl;
    cout << setw(colWidth) << "Module 5:" << setw(2 * colWidth)
        << (row.getModule())[4].getModuleCode() << endl;
    cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
    cout << endl;
  }
}

void printAllStaffs(string filename)
{
    // int colWidth = 30;
    // rapidcsv::Document doc("person.dat", rapidcsv::LabelParams(-1, -1));
    // const size_t rowCount = doc.GetRowCount();
    // cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
    // cout << setfill(' ') << fixed;
    // cout << setw(3 * colWidth) << "STAFF INFORMATION" << endl;
    // cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
    // cout << setfill(' ') << fixed;
    // for (size_t i = 0; i < rowCount; ++i) {
    //     vector<string> row = doc.GetRow<string>(i);
    //     if (row[9] == "staff") {
    //         cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
    //         cout << setfill(' ') << fixed;
    //         cout << setw(colWidth) << "Name:" << setw(2 * colWidth) << row[0]
    //             << endl;
    //         cout << setw(colWidth) << "Date of Birth:" << setw(2 * colWidth)
    //             << row[1] << endl;
    //         cout << setw(colWidth) << "Gender:" << setw(2 * colWidth) << row[2]
    //             << endl;
    //         cout << setw(colWidth) << "Contact Number:" << setw(2 * colWidth)
    //             << row[3] << endl;
    //         cout << setw(colWidth) << "Email:" << setw(2 * colWidth) << row[4]
    //             << endl;
    //         cout << setw(colWidth) << "Type:" << setw(2 * colWidth) << row[5]
    //             << endl;
    //         cout << setw(colWidth) << "School:" << setw(2 * colWidth) << row[6]
    //             << endl;
    //         cout << setw(colWidth) << "Salary (SGD$):" << setw(2 * colWidth) << row[7]
    //             << endl;
    //         cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
    //         cout << endl;
    //     }
    // }
  
  // Without RapidCSV
  int colWidth = 30;
  cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
  cout << setfill(' ') << fixed;
  cout << setw(3 * colWidth) << "STAFF INFORMATION" << endl;
  cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
  cout << setfill(' ') << fixed;
  vector<Professor> staffs = loadStaffs(filename);
  for (auto row: staffs) {
    cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
    cout << setfill(' ') << fixed;
    cout << setw(colWidth) << "Name:" << setw(2 * colWidth) << row.getName()
        << endl;
    cout << setw(colWidth) << "Date of Birth:" << setw(2 * colWidth)
        << row.getDateOfBirth() << endl;
    cout << setw(colWidth) << "Gender:" << setw(2 * colWidth) << row.getGender()
        << endl;
    cout << setw(colWidth) << "Contact Number:" << setw(2 * colWidth)
        << row.getContactNumber() << endl;
    cout << setw(colWidth) << "Email:" << setw(2 * colWidth) << row.getEmail()
        << endl;
    cout << setw(colWidth) << "Designation:" << setw(2 * colWidth) << row.getDesignation()
        << endl;
    cout << setw(colWidth) << "School:" << setw(2 * colWidth) << row.getDepartment()
        << endl;
    cout << setw(colWidth) << "Salary (SGD$):" << setw(2 * colWidth) 
      << std::fixed << std::setprecision(2) << row.getSalary() << endl;
    cout << setw(colWidth) << "Staff ID:" << setw(2 * colWidth) << row.getStaffId()
        << endl;
    cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
    cout << endl;
  }
}

bool findStaff(string filename, string staffId)
{
  int count = 0;
  int colWidth = 30;
  cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
  cout << setfill(' ') << fixed;
  cout << setw(3 * colWidth) << "STAFF INFORMATION" << endl;
  cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
  cout << setfill(' ') << fixed;
  vector<Professor> staffs = loadStaffs(filename);
  for (auto row: staffs) {
    if(row.getStaffId() == stoi(staffId))
    {
      cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
      cout << setfill(' ') << fixed;
      cout << setw(colWidth) << "Name:" << setw(2 * colWidth) << row.getName()
          << endl;
      cout << setw(colWidth) << "Date of Birth:" << setw(2 * colWidth)
          << row.getDateOfBirth() << endl;
      cout << setw(colWidth) << "Gender:" << setw(2 * colWidth) << row.getGender()
          << endl;
      cout << setw(colWidth) << "Contact Number:" << setw(2 * colWidth)
          << row.getContactNumber() << endl;
      cout << setw(colWidth) << "Email:" << setw(2 * colWidth) << row.getEmail()
          << endl;
      cout << setw(colWidth) << "Designation:" << setw(2 * colWidth) << row.getDesignation()
          << endl;
      cout << setw(colWidth) << "School:" << setw(2 * colWidth) << row.getDepartment()
          << endl;
      cout << setw(colWidth) << "Salary (SGD$):" << setw(2 * colWidth) 
        << std::fixed << std::setprecision(2) << row.getSalary() << endl;
      cout << setw(colWidth) << "Staff ID:" << setw(2 * colWidth) << row.getStaffId()
        << endl;
      cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
      cout << endl;
      count++;
    }
  }
  if(count > 0)
    return true;
  return false;
}

void update_staff(string filename, string staffId, int indexToChange, string content)
{
  ifstream filein(filename); //File to read from
  ofstream fileout("person_temp.dat"); //Temporary file
  if(!filein || !fileout)
  {
      cout << "Error opening files!" << endl;
  }

  string strTemp;
  //bool found = false;
  while(getline(filein, strTemp))
  {
    // split "," comma from string
    vector<string> v;
    stringstream ss(strTemp);
    while (ss.good()) {
        string substr;
        getline(ss, substr, ',');
        v.push_back(substr);
    }

    // unique ID is contactNumber. Look through the file to check for the contact       number then replace that line
    if(v[8] == staffId && v[9] == "staff"){
      v[indexToChange] = content;
      fileout << v[0] << ","
       << v[1] << ","
       << v[2] << ","
       << v[3] << ","
       << v[4] << ","
       << v[5] << ","
       << v[6] << ","
       << std::fixed << std::setprecision(2) << v[7] << ","
       << v[8] << ","
       << "staff"
       << endl;
    }
    else
    {
      fileout << strTemp << endl;
    }
  }
  fileout.close();
  filein.close();
  rename("person_temp.dat", filename.c_str());
}

vector<Professor> loadStaffs(string filename)
{
  vector<Professor> staffs;
  ifstream filein(filename); //File to read from
  if(!filein)
  {
      cout << "Error opening file!" << endl;
  }

  string strTemp;
  //bool found = false;
  while(getline(filein, strTemp))
  {
    // split "," comma from string
    vector<string> v;
    stringstream ss(strTemp);
    while (ss.good()) 
    {
        string substr;
        getline(ss, substr, ',');
        v.push_back(substr);
    }

    if(v[9] == "staff"){
      Professor prof(v[0], v[1], v[2], stoi(v[3]), v[4], v[5], v[6], stod(v[7]), stod(v[8]));
      staffs.push_back(prof);
    }
  }
  filein.close();
  return staffs;
}

vector<Student> loadStudents(string filename)
{
  vector<Student> objects;
  ifstream filein(filename); //File to read from
  if(!filein)
  {
      cout << "Error opening file!" << endl;
  }

  string strTemp;
  //bool found = false;
  while(getline(filein, strTemp))
  {
    // split "," comma from string
    vector<string> v;
    stringstream ss(strTemp);
    while (ss.good()) 
    {
        string substr;
        getline(ss, substr, ',');
        v.push_back(substr);
    }

    if(v[9] == "student")
    {
      //(string name, string dateOfBirth, string gender, int contactNumber, string email, double totalAmount, double outstandingAmount, bool paymentStatus, int studentId, Module module[5])
      bool paymentStatus;
      istringstream(v[7]) >> paymentStatus;
      Module module[5];
      module[0].setModuleCode(stoi(v[10]));
      module[0].setGrade(stod(v[11]));
      module[1].setModuleCode(stoi(v[12]));
      module[1].setGrade(stod(v[13]));
      module[2].setModuleCode(stoi(v[14]));
      module[2].setGrade(stod(v[15]));
      module[3].setModuleCode(stoi(v[16]));
      module[3].setGrade(stod(v[17]));
      module[4].setModuleCode(stoi(v[18]));
      module[4].setGrade(stod(v[19]));
      Student obj(v[0], v[1], v[2], stoi(v[3]), v[4], stod(v[5]), stod(v[6]), paymentStatus, stod(v[8]), module);
      objects.push_back(obj);
    }
  }
  filein.close();
  return objects;
}