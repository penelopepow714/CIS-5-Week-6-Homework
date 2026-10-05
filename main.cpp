#include <iostream>
#include <string>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string; 

// Homework 6 — Your Name
// CIS 5 Week 06 · Menu

int main() {
  int choice;

  do {
    std :: cout << "1. Say Hello";
    std :: cout << "2. Count down from a number";
    std :: cout << "3. Exit";
    std :: cout << "Choose: ";
    std :: cin >> choice;

    if (choice == 1) {
      std :: string user;
      std :: cout << "Enter your name: ";
      std :: cin >> user;
      std :: cout << "Hello " << user;
    }
    else if (choice == 2) {
      int num;
      std :: cout << "Enter a starting number: ";
      std :: cin >> num;

      while (num >= 0) {
        std :: cout << num << " ";
        num--;
      }
      std :: cout << "\n";
    }
    else if (choice == 3) {

    }
    else {
      std :: cout << "Invaild";
    }
  } while (choice !=3);
  std :: cout << "Menu is closed";

  return 0;
}
