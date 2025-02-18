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
#include "reports.h"
#include "bookType.h"
using namespace std;

int main() {
  // Data Dictionary
char Choice;  // INPUT : User's choice

// Create while loop menu until 4/Exit is chosen

bookType array[20] = {};

int bookCount = 0;

do{
system("clear");

cout << "==================================================================================\n";
cout << "= Serendipity Booksellers                                                        =\n";
cout << "= Main Menu                                                                      =\n";
cout << "= 1. Cashier Module                                                              =\n";
cout << "= 2. Inventory Database Module                                                   =\n"; 
cout << "= 3. Reports Module                                                              =\n"; 
cout << "= 4. Exit                                                                        =" << endl;
cout << "==================================================================================\n";

cout << left << "Enter your choice: ";
cin >> Choice;

// Prompt showing what user selected
    switch (Choice) {
      case '1':
        cout << "\n" << "You selected item: 1" << endl;
	cout << "Press ENTER to continue..." << endl;
	cin.ignore();
	cin.get();
		cashier();
        break;
      case '2': 
			bookCount = invmenu(array, bookCount);
      break;
      case '3':
        cout << "\n" << "You selected item: 3" << endl;
	cout << "Press ENTER to continue..." << endl;
	cin.ignore();
	cin.get();
	reports();
        break;
      case '4': 
        break;
      default:
         cout << "\n'" << Choice << "'" << "is invalid input. Please enter your choice again. \n";
	 cout << "Press ENTER to continue..." << endl;
	 cin.ignore();
	 cin.get();
     }

  }while (Choice != '4');
return 0;

}
