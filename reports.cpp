//**************************************************************
//* Author: Eric Bernal                                        *
//* Assignment: G2                                             *
//* Due Date: 02/04/2025                                       *
//* Purpose: The reports module of the Serendipity Assignment. *
//**************************************************************
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

  //Data Dictionary
  int Choice;            //INPUT : User's chosen menu option

  //Repeat menu until user has chosen to exit the program.
  do {
    cout << "\033[2J\033[1;1H";
      cout << setw(30) << left << "Serendipity Booksellers\n Reports" << endl;
      cout << setw(20) << left << "1. Inventory Listing\n 2. Inventory Wholesale Value\n 3. Inventory Retail Value\n 4. Listing by Quantity\n 5. Listing by Cost\n 6. Listing by Age\n 7. Return to Main Menu" << endl;
      cout << setw(30) << left << "Enter Your Choice : " << Choice << endl;
      cout << setw(30) << left << "Please enter a number from 1 - 7!" << endl;
      cin >> Choice;
    

  //Input Validation
  switch (Choice) {
    case 1:
      cout << setw(40) << " You have selected item 1. " << endl;
      break;
    case 2:
      cout << setw(40) << " You have selected item 2. " << endl;
      break;
    case 3: 
      cout << setw(40) << " You have selected item 3. " << endl;
      break;
    case 4:
      cout << setw(40) << " You have selected item 4. " << endl;
      break;
    case 5:
      cout << setw(40) << " You have selected item 5. " << endl;
      break;
    case 6:
      cout << setw(40) <<  " You have selected item 6. " << endl;
      break;
    case 7:
      cout << setw(40) << " You have selected item 7. Goodbye! " << endl;
      break;
    default:
      cout << setw(40) << "'" << Choice << "'" << "is invalid. Please enter a number from 1 - 7!"  << endl;
      cin.ignore(80, '\n');
      cin.get();
      cin >> Choice;
  }
      cout << setw(47) << "Press ENTER to continue..." << endl;
     cin.ignore(80, '\n');
      cin.get();
    
  }while (Choice != 7);

return 0;

}
