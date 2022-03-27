#include "Helper.h"
#include <iostream>

using namespace std;

void clear_screen() {
  #ifdef WINDOWS
    system("cls");
  #else
    // Assume POSIX
    system ("clear");
  #endif
};