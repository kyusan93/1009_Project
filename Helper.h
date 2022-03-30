#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include "Professor.h"

using namespace std;

void clear_screen();
void newStudentRecord();
void newStaffRecord();
void printAllStudents();
void printAllStaffs(string);
bool findStaff(string, string);
void update_staff(string, string, int, string);
vector<Professor> loadStaffs(string);