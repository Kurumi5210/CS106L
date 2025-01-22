/*
 * CS106L Assignment 3: Make a Class
 * Created by Fabio Ibanez with modifications by Jacob Roberts-Baca.
 */

/* #### Please don't change this line! #### */
#include <iostream>
#include <string>
#include "class.h"
int run_autograder();

int main() {
  // STUDENT TODO: Construct an instance of your class!
  Computer cx_computer(15000, "AMD 9700x", "Nvidia RTX 4080Super");
  cx_computer.get_info();
  cx_computer.upgrade("AMD 9950x3D", "Nvidia RTX 5090Ti");
  std::string CX_GPU = cx_computer.get_GPU();
  std::cout << CX_GPU << std::endl;
  /* #### Please don't change this line! #### */
  return run_autograder();
}

/* #### Please don't change this line! #### */
#include "utils.hpp"