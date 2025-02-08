//***********************************************
//* Author: Eric Bernal                         *
//* Assignment: G2                              *
//* Due Date: 02/04/2025                        *
//* Purpose: The main menu selection of the     *
//*          Serendipity project.               *
//***********************************************/
#include <iostream> 
#include <iomanip>
#include "cashier.h"
#include "invmenu.h"
using namespace std;

int main() {
  // Data Dictionary
char Choice;  // INPUT : User's choice

// Create while loop menu until 4/Exit is chosen
do{
cout << "\033[2J\033[1;1H";
cout << left << setw(46) << "Serendipity Booksellers" << "\n" << setw(39) << "Main Menu" << endl;
cout << left << setw(38) << "1. Cashier Module" << "\n" << setw(49) << "2. Inventory Database Module" << "\n" << setw(38) << "3. Reports Module" << "\n" << setw(28) << "4. Exit" << endl;
cout << left << setw(40) << "Enter your choice: ";
cin >> Choice;

// Prompt showing what user selected
    switch (Choice) {
      case '1':
        cout << "\n" << setw(41) << "You selected item: 1" << endl;
	cout << setw(47) << "Press ENTER to continue..." << endl;
	cin.ignore();
	cin.get();
		cashier();
        break;
      case '2': 
        cout << "\n" << setw(41) << "You selected item: 2" << endl;
	cout << setw(47) << "Press ENTER to continue..." << endl;
	cin.ignore();
	cin.get();
		invmenu();
        break;
      case '3':
        cout << "\n" << setw(41) << "You selected item: 3" << endl;
	cout << setw(47) << "Press ENTER to continue..." << endl;
	cin.ignore();
	cin.get();
        break;
      case '4': 
        cout << "\n" << setw(41) << "You selected item: 4" << endl;
	cout << setw(47) << "Press ENTER to continue..." << endl;
	cin.ignore();
	cin.get();
        break;
      default:
         cout << "'" << Choice << "'" << "is invalid input. Please enter your choice again.";   
     }

  }while (Choice != '4');
return 0;

}
