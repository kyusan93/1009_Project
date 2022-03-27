#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include <cstdlib>
#include <fstream>
#include <vector>
#include "RapidCSV.h"
#include <iomanip>
#include <math.h>

#include "Helper.h"

#include "Student.h"
#include "Professor.h"
#include "Person.h"
#include "Finance.h"

using namespace std;

int main() {
  
  double n=1;
  int colWidth=20;

  // Person *qus = new Student("Qus", "07/02/1996", "Male", 90666567, "2102345@sit.SingaporeTech.edu.sg", 1000.00, 1000.00, false, 2102345);
  
  // Student gohthiamaik("Goh Thiam Aik", "01/01/1981", "Male", 87654321, "2102924@sit.SingaporeTech.edu.sg", 1000.00, 1000.00, false, 2102924);

  // Professor zhangwei("Zhang Wei", "01/01/1988", "Male", 91234567, "zhang.wei@SingaporeTech.edu.sg", "Professor", "ICT", 12000.00);

  // Person *donnysoh = new Professor("Donny Soh", "01/01/1988", "Male", 91234567, "donny.soh@SingaporeTech.edu.sg", "Professor", "ICT", 16000.00);
  
  int mainChoice;
	int inChoice; 
	int gotoMenu;

	cout << "\t\t		* Welcome to 09 University Management Systems\n" << endl;
	cout << "----------------------------Main Menu----------------------------" << endl;

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

	if (mainChoice == 1)
	{
		cout << "------Student------\n" << endl;
		cout << "1. Enter New Student" << endl;
		cout << "2. See current Students" << endl;

		cout << "\nEnter Choice: ";
		cin >> inChoice;
		clear_screen();
		if (inChoice == 1)
		{
  
		}
		else if (inChoice == 2)
		{
      // qus->printInfo();
      // gohthiamaik.printInfo();
      rapidcsv::Document doc("person.dat", rapidcsv::LabelParams(-1, -1));
      const size_t rowCount = doc.GetRowCount();
      for (size_t i = 0; i < rowCount; ++i)
      {
        vector<string> row = doc.GetRow<string>(i);
        if (row[9] == "student") {
          cout << setfill('_') << setw(3*colWidth) << "_" << endl;
          cout << setfill(' ') << fixed;
          cout << setw(colWidth) << "Name:" << setw(colWidth) << row[0] << endl;
          cout << setw(colWidth) << "Date of Birth:" << setw(colWidth) << row[1] << endl;
          cout << setw(colWidth) << "Gender:" << setw(colWidth) << row[2] << endl;
          cout << setw(colWidth) << "Contact Number:" << setw(colWidth) << row[3] << endl;
          cout << setw(colWidth) << "Email:" << setw(colWidth) << row[4] << endl;
          cout << setw(colWidth) << "Total Fees:" << setw(colWidth) << row[5] << endl;
          cout << setw(colWidth) << "O/S Amount:" << setw(colWidth) << row[6] << endl;
          cout << setw(colWidth) << "Payment Made:" << setw(colWidth) << row[7] << endl;
          cout << setw(colWidth) << "Student ID:" << setw(colWidth) << row[8] << endl;
          cout << setfill('_') << setw(3*colWidth) << "_" << endl;
          cout << endl;
        }
      }
		}
		else
		{
			cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
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
	}
	else if (mainChoice == 2)
	{
    cout << "------Professor------\n" << endl;
		cout << "1. Enter New Professor" << endl;
		cout << "2. See current Professor" << endl;

		cout << "\nEnter Choice: ";
		cin >> inChoice;
		clear_screen();

    if (inChoice == 1)
		{
  
		}
		else if (inChoice == 2)
		{
      // zhangwei.printInfo();
      // donnysoh->printInfo();
      rapidcsv::Document doc("person.dat", rapidcsv::LabelParams(-1, -1));
      const size_t rowCount = doc.GetRowCount();
      for (size_t i = 0; i < rowCount; ++i)
      {
        vector<string> row = doc.GetRow<string>(i);
        if (row[9] == "staff") {
          cout << setfill('_') << setw(3*colWidth) << "_" << endl;
          cout << setfill(' ') << fixed;
          cout << setw(colWidth) << "Name:" << setw(colWidth) << row[0] << endl;
          cout << setw(colWidth) << "Date of Birth:" << setw(colWidth) << row[1] << endl;
          cout << setw(colWidth) << "Gender:" << setw(colWidth) << row[2] << endl;
          cout << setw(colWidth) << "Contact Number:" << setw(colWidth) << row[3] << endl;
          cout << setw(colWidth) << "Email:" << setw(colWidth) << row[4] << endl;
          cout << setw(colWidth) << "Total Fees:" << setw(colWidth) << row[5] << endl;
          cout << setw(colWidth) << "O/S Amount:" << setw(colWidth) << row[6] << endl;
          cout << setw(colWidth) << "Payment Made:" << setw(colWidth) << row[7] << endl;
          cout << setw(colWidth) << "Student ID:" << setw(colWidth) << row[8] << endl;
          cout << setfill('_') << setw(3*colWidth) << "_" << endl;
          cout << endl;
        }
      }
		}
		else
		{
			cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
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
	}
	else if (mainChoice == 3)
	{

	}
	else if (mainChoice == 4)
	{
		cout << "==>Get Receipt <--" << endl;
		cout << "To display the receipt on the screen, Enter 1: or Enter any key to return to Main Menu: ";

		cin >> gotoMenu;

		if (gotoMenu == 1)
		{
			clear_screen();
			// charges.showBill();
			cout << "\nPress 1 to return to Main Menu: ";
			cin >> gotoMenu;
			system("CLS");
			if (gotoMenu == 1)
			{
				main();
			}
			else
			{
				main();
			}
		}
		else
		{
			clear_screen();
			main();
		}
	}
	else if (mainChoice == 5)
	{
		cout << "--GOOD BYE--" << endl;
		this_thread::sleep_for(chrono::milliseconds(999));
		clear_screen();
		main();
	}
}