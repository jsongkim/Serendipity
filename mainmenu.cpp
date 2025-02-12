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
using namespace std;

int main() {
  // Data Dictionary
char Choice;  // INPUT : User's choice

// Create while loop menu until 4/Exit is chosen
do{
cout << "\033[2J\033[1;1H";
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
	reports();
        break;
      case '4': 
        cout << "\n" << setw(41) << "You selected item: 4" << endl;
	cout << setw(47) << "Press ENTER to continue..." << endl;
	cin.ignore();
	cin.get();
        break;
      default:
         cout << "\n'" << Choice << "'" << "is invalid input. Please enter your choice again. \n";
	 cout << setw(47) << "Press ENTER to continue..." << endl;
	 cin.ignore();
	 cin.get();
     }

  }while (Choice != '4');
return 0;

}
