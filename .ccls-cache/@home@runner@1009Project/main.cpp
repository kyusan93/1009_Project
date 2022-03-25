#include <iostream>
#include <string>
#include "Student.h"
#include "Professor.h"
#include "Person.h"
#include "Finance.h"
#include <chrono>
#include <thread>
#include <stdlib.h>

using namespace std;

int main() {

  Person *qus = new Student("Qus", "07/02/1996", "Male", 90666567, "2102345@sit.SingaporeTech.edu.sg", 1000.00, 1000.00, false, 2102345);
  
  Student gohthiamaik("Goh Thiam Aik", "01/01/1981", "Male", 87654321, "2102924@sit.SingaporeTech.edu.sg", 1000.00, 1000.00, false, 2102924);

  Professor zhangwei("Zhang Wei", "01/01/1988", "Male", 91234567, "zhang.wei@SingaporeTech.edu.sg", "Professor", "ICT", 12000.00);

  Person *donnysoh = new Professor("Donny Soh", "01/01/1988", "Male", 91234567, "donny.soh@SingaporeTech.edu.sg", "Professor", "ICT", 16000.00);
  
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
	cout << "\t|\t3. Exit		            \t  |" << endl;
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
		system("CLS");
		if (inChoice == 1)
		{
  
		}
		else if (inChoice == 2)
		{
      qus->printInfo();
      gohthiamaik.printInfo();
		}
		else
		{
			cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
      this_thread::sleep_for(chrono::milliseconds(1100));
			system("CLS");
			main();
		}
		cout << "\nPress 1 to Redirect to Main Menu: ";
		cin >> gotoMenu;
		system("CLS");
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
		system("CLS");

    if (inChoice == 1)
		{
  
		}
		else if (inChoice == 2)
		{
      zhangwei.printInfo();
      donnysoh->printInfo();
		}
		else
		{
			cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
      this_thread::sleep_for(chrono::milliseconds(1100));
			system("CLS");
			main();
		}
		cout << "\nPress 1 to Redirect to Main Menu: ";
		cin >> gotoMenu;
		system("CLS");
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
			system("CLS");
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
			system("CLS");
			main();
		}
	}
	else if (mainChoice == 5)
	{
		cout << "--GOOD BYE--" << endl;
		this_thread::sleep_for(chrono::milliseconds(999));
		system("CLS");
		main();
	}
}