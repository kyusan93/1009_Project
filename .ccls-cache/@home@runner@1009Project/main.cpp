#include <iostream>
#include <string>
#include "Student.h"
#include "Professor.h"
#include "Person.h"
#include "Module.h"
#include "Finance.h"


using namespace std;

int main() {
  int mainChoice;
	int inChoice; 
	int gotoMenu;

	cout << "\t\t		* Welcome to 09 University Management Systems\n" << endl;
	cout << "----------------------------Main Menu----------------------------" << endl;

	cout << "\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;
	cout << "\t|\t\t\t\t\t|" << endl;
	cout << "\t|\tWho would you like to view?\t|" << endl;
	cout << "\t|\t1. Student\t|" << endl;
	cout << "\t|\t2. Professor\t|" << endl;
	cout << "\t|\t3. Exit			-> 5\t|" << endl;
	cout << "\t|\t\t\t\t\t|" << endl;
	cout << "\t_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;

	cout << "\nEnter Your Choice: ";
	cin >> mainChoice;

	Student student;
	Professor professor;
	Person person;
	Module module;
  Finance finance;

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
			student.setStudentData();
		}
		else if (inChoice == 2)
		{
			student.displayStudentData();
		}
		else
		{
			cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
			Sleep(1100);
			system("CLS");
			menu();
		}
		cout << "\nPress 1 to Redirect to Main Menu: ";
		cin >> gotoMenu;
		system("CLS");
		if (gotoMenu == 1)
		{
			menu();
		}
	}
	else if (mainChoice == 2)
	{
		cabs.cabDetails();
	}
	else if (mainChoice == 3)
	{
		booking.hotels();
	}
	else if (mainChoice == 4)
	{
		cout << "==>Get Receipt <--" << endl;
		cout << "To display the receipt in the screen, Enter 1: or Enter any key to return to Main Menu: ";

		cin >> gotoMenu;

		if (gotoMenu == 1)
		{
			system("CLS");
			charges.showBill();
			cout << "\nPress 1 to return to Main Menu: ";
			cin >> gotoMenu;
			system("CLS");
			if (gotoMenu == 1)
			{
				menu();
			}
			else
			{
				menu();
			}
		}
		else
		{
			system("CLS");
			menu();
		}
	}
	else if (mainChoice == 5)
	{
		cout << "--GOOD BYE--" << endl;
		Sleep(999);
		system("CLS");
		menu();
	}
}