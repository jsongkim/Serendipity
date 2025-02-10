#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void reports() {

  //Data Dictionary
  char rChoice;            //INPUT : User's chosen menu option

  //Repeat menu until user has chosen to exit the program.
  do {
    cout << "\033[2J\033[1;1H";
      cout << "Serendipity Booksellers\n" << "Reports Module" << endl;
      cout << "1. Inventory Listing\n2. Inventory Wholesale Value\n3. Inventory Retail Value\n4. Listing by Quantity\n5. Listing by Cost\n6. Listing by Age\n7. Return to Main Menu" << endl;
      cout << "Enter Your Choice : ";
      cin >> rChoice;
    

  //Input Validation
  switch (rChoice) {
    case '1':
      cout << "You have selected item 1. " << endl;
      break;
    case '2':
      cout << "You have selected item 2. " << endl;
      break;
    case '3': 
      cout << "You have selected item 3. " << endl;
      break;
    case '4':
      cout << "You have selected item 4. " << endl;
      break;
    case '5':
      cout << "You have selected item 5. " << endl;
      break;
    case '6':
      cout << "You have selected item 6. " << endl;
      break;
    case '7':
      cout << "You have selected item 7. " << endl;
      break;
    default:
      cout << "'" << rChoice << "' " << "is invalid. Please enter a number from 1 - 7: ";
      cin >> rChoice;
  }
      cout << setw(47) << "Press ENTER to continue..." << endl;
     cin.ignore(80, '\n');
      cin.get();
    
  }while (rChoice != '7');

return;

}
