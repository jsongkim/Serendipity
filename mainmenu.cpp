//***********************************************
//* Author: Eric Bernal                         *
//* Assignment: G2                              *
//* Due Date: 02/04/2025                        *
//* Purpose: The main menu selection of the     *
//*          Serendipity project.               *
//***********************************************
#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
  // Data Dictionary
int Choice;  // INPUT : User's choice

// Create while loop menu until 4/Exit is chosen
do{
cout << left << setw(20) << "Serendipity Booksellers \n Main Menu" << endl;
cout << left << setw(15) << "1. Cashier Module\n 2. Inventory Database Module\n 3. Reports Module\n 4. Exit" << endl;
cout << left << setw(20) << "Enter your choice: " << endl;
cin >> Choice;

// User input validation
  if (Choice > 4) {
  cout << "Please enter a number from 1-4" << endl;
  cin >> Choice;
  }

// Prompt showing what user selected
    switch (Choice) {
      case 1:
        cout << "You selected item: 1" << endl;
        break;
      case 2: 
        cout << "You selected item: 2" << endl;
        break;
      case 3:
        cout << "You selected item: 3" << endl;
        break;
      case 4: "You selected item: 4\n Goodbye!" <<endl;
      default:
        cout << "Invalid input. Please enter a number from 1-4" << endl;
    }
  }while (Choice != 4)
return 0;

}
