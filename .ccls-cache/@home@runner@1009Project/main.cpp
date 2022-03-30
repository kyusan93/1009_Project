#include "RapidCSV.h"
#include <chrono>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string>
#include <thread>
#include <vector>

#include "Helper.h"
#include "Person.h"
#include "Professor.h"
#include "Student.h"
#include "Module.h"

using namespace std;

int main() {

  double n = 1;
  int colWidth = 30;

  // Student gohthiamaik("Goh Thiam Aik", "01/01/1981", "Male", 87654321,
  // "2102924@sit.SingaporeTech.edu.sg", 1000.00, 1000.00, false, 2102924);

  // Professor zhangwei("Zhang Wei", "01/01/1988", "Male", 91234567,
  // "zhang.wei@SingaporeTech.edu.sg", "Professor", "ICT", 12000.00);

  // Person *donnysoh = new Professor("Donny Soh", "01/01/1988", "Male",
  // 91234567, "donny.soh@SingaporeTech.edu.sg", "Professor", "ICT", 16000.00);

  int mainChoice;
  int inChoice;
  int gotoMenu;

  cout << "\t\t		* Welcome to 09 University Management Systems\n"
       << endl;
  cout << "----------------------------Main Menu----------------------------"
       << endl;

  cout << "\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
  cout << "\t|\t\t\t\t\t              |" << endl;
  cout << "\t|\tWho would you like to view?\t  |" << endl;
  cout << "\t|\t1. Student                \t  |" << endl;
  cout << "\t|\t2. Professor              \t  |" << endl;
  cout << "\t|\t3. Module		              \t  |" << endl;
  cout << "\t|\t4. Administrative View \t  |" << endl;
  cout << "\t|\t. Exit		                \t  |" << endl;
  cout << "\t|\t\t\t\t\t              |" << endl;
  cout << "\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;

  cout << "\nEnter Your Choice: ";
  cin >> mainChoice;

  // Person student = new Student();
  // Professor professor;
  // Person person;
  // Module module;
  //  Finance finance;

  if (mainChoice == 1) {
    cout << "------Student------\n" << endl;
    cout << "1. Enter New Student" << endl;
    cout << "2. See current Students" << endl;

    cout << "\nEnter Choice: ";
    cin >> inChoice;
    clear_screen();
    if (inChoice == 1) 
    {
      newStudentRecord();
    }
    else if (inChoice == 2) // Print all the current students
    {
      printAllStudents();
    } 
    else 
    {
      cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!"
           << endl;
      this_thread::sleep_for(chrono::milliseconds(1100));
      clear_screen();
      main();
    }
    
    cout << "\nPress 1 to Redirect to Main Menu: ";
    cin >> gotoMenu;
    clear_screen();
    if (gotoMenu == 1) 
    {
      main();
    }
  } else if (mainChoice == 2) {
    cout << "------Professor------\n" << endl;
    cout << "1. Enter New Professor" << endl;
    cout << "2. See current Professor" << endl;
    cout << "3. Edit Professor" << endl;

    cout << "\nEnter Choice: ";
    cin >> inChoice;
    clear_screen();

    if (inChoice == 1) {
      newStaffRecord();
    } 
    else if (inChoice == 2) // Print all the current staffs
    {
      printAllStaffs("person.dat");
    }
    else if (inChoice == 3) // Edit a staff
    {
      string tempContactNumber;
      string name, dateOfBirth, gender, email, designation, department, contactNumber, salary;
      cout << "Enter the Contact Number of the Staff: " << endl;
      cin >> tempContactNumber;
      bool staffFound = findStaff("person.dat", tempContactNumber);
      if(staffFound == false)
      {
        cout << "No Record Found!" << endl;
      }
      else
      {
        Professor *staffObj;
        bool loop = true;
        while(loop)
        {
          cout << "------Edit------\n" << endl;
          cout << "1. Name" << endl;
          cout << "2. Date Of Birth" << endl;
          cout << "3. Gender" << endl;
          cout << "4. Contact Number" << endl;
          cout << "5. Email" << endl;
          cout << "6. Designation" << endl;
          cout << "7. Department" << endl;
          cout << "8. Salary" << endl;
          cout << "9. Finish Editing" << endl;
          
          cout << "\nEnter Choice: ";
          cin >> inChoice;
          switch(inChoice) {
            case 1:
              cout << "Enter the Name of the Staff: ";
              cin.ignore();
              getline(cin, name);
              update_staff("person.dat", tempContactNumber, inChoice - 1, name);
              clear_screen();
              findStaff("person.dat", tempContactNumber);
              break;
            case 2:
              cout << "Enter the Date Of Birth of the Staff: " << endl;
              cin.ignore();
              getline(cin, dateOfBirth);
              update_staff("person.dat", tempContactNumber, inChoice - 1, dateOfBirth);
              clear_screen();
              findStaff("person.dat", tempContactNumber);
              break;
            case 3:
              cout << "Enter the Gender of the Staff: " << endl;
              cin.ignore();
              getline(cin, gender);
              update_staff("person.dat", tempContactNumber, inChoice - 1, gender);
              clear_screen();
              findStaff("person.dat", tempContactNumber);
              break;
            case 4:
              cout << "Enter the Contact Number of the Staff: " << endl;
              cin.ignore();
              getline(cin, contactNumber);
              update_staff("person.dat", tempContactNumber, inChoice - 1, contactNumber);
              tempContactNumber = contactNumber;
              clear_screen();
              findStaff("person.dat", tempContactNumber);
              break;
            case 5:
              cout << "Enter the Email of the Staff: " << endl;
              cin.ignore();
              getline(cin, email);
              update_staff("person.dat", tempContactNumber, inChoice - 1, email);
              clear_screen();
              findStaff("person.dat", tempContactNumber);
              break;
            case 6:
              cout << "Enter the Designation of the Staff: " << endl;
              cin.ignore();
              getline(cin, designation);
              update_staff("person.dat", tempContactNumber, inChoice - 1, designation);
              clear_screen();
              findStaff("person.dat", tempContactNumber);
              break;
            case 7:
              cout << "Enter the Department of the Staff: " << endl;
              cin.ignore();
              getline(cin, contactNumber);
              update_staff("person.dat", tempContactNumber, inChoice - 1, contactNumber);
              clear_screen();
              findStaff("person.dat", tempContactNumber);
              break;
            case 8:
              cout << "Enter the Salary of the Staff: " << endl;
              cin.ignore();
              getline(cin, salary);
              update_staff("person.dat", tempContactNumber, inChoice - 1, salary);
              clear_screen();
              findStaff("person.dat", tempContactNumber);
              break;
            default:
              loop = false;
          }
        }
      }
    }
    else 
    {
      cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!"
           << endl;
      this_thread::sleep_for(chrono::milliseconds(1100));
      clear_screen();
      main();
    }
    cout << "\nPress 1 to Redirect to Main Menu: ";
    cin >> inChoice;
    clear_screen();
    if (inChoice == 1) {
      main();
    }
  } else if (mainChoice == 3) {

  } else if (mainChoice == 4) {
    cout << "==>Get Receipt <--" << endl;
    cout << "To display the receipt on the screen, Enter 1: or Enter any key "
            "to return to Main Menu: ";

    cin >> gotoMenu;

    if (gotoMenu == 1) {
      clear_screen();
      // charges.showBill();
      cout << "\nPress 1 to return to Main Menu: ";
      cin >> gotoMenu;
      system("CLS");
      if (gotoMenu == 1) {
        main();
      } else {
        main();
      }
    } else {
      clear_screen();
      main();
    }
  } else if (mainChoice == 5) {
    cout << "--GOOD BYE--" << endl;
    this_thread::sleep_for(chrono::milliseconds(999));
    clear_screen();
    main();
  }
}