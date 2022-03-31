#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include "Professor.h"
#include "Student.h"

using namespace std;

void clear_screen();
void newStudentRecord();
void newStaffRecord();
void printAllStudents(string);
void printAllStaffs(string);
bool findStaff(string, string);
void update_staff(string, string, int, string);
vector<Professor> loadStaffs(string);
vector<Student> loadStudents(string);