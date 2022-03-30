#include "DataControl.h"
#include "RapidCSV.h"
#include <iostream>
#include <iomanip>

using namespace std;

void printAllStudents() {
  int colWidth = 30
  rapidcsv::Document doc("person.dat", rapidcsv::LabelParams(-1, -1));
  const size_t rowCount = doc.GetRowCount();
  cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
  cout << setfill(' ') << fixed;
  cout << setw(3 * colWidth) << "STUDENT INFORMATION" << endl;
  cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
  cout << setfill(' ') << fixed;
  for (size_t i = 0; i < rowCount; ++i) {
    vector<string> row = doc.GetRow<string>(i);
    if (row[9] == "student") {
      cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
      cout << setfill(' ') << fixed;
      cout << setw(colWidth) << "Name:" << setw(2 * colWidth) << row[0]
           << endl;
      cout << setw(colWidth) << "Date of Birth:" << setw(2 * colWidth)
           << row[1] << endl;
      cout << setw(colWidth) << "Gender:" << setw(2 * colWidth) << row[2]
           << endl;
      cout << setw(colWidth) << "Contact Number:" << setw(2 * colWidth)
           << row[3] << endl;
      cout << setw(colWidth) << "Email:" << setw(2 * colWidth) << row[4]
           << endl;
      cout << setw(colWidth) << "Total Fees:" << setw(2 * colWidth)
           << row[5] << endl;
      cout << setw(colWidth) << "O/S Amount:" << setw(2 * colWidth)
           << row[6] << endl;
      cout << setw(colWidth) << "Payment Made:" << setw(2 * colWidth)
           << row[7] << endl;
      cout << setw(colWidth) << "Student ID:" << setw(2 * colWidth)
           << row[8] << endl;
      cout << setfill('_') << setw(3 * colWidth) << "_" << endl;
      cout << endl;
    }
  }
}