#include <iostream>
#include <iomanip>
#include "cashier.h"
#include "invmenu.h"
#include "reports.h"
#include "bookType.h"
using namespace std;

int main() {

// Variable and array declaration.
char Choice;
bookType array[20] = {};
int bookCount = 0;

// Do while loop for looping menu.
do{
system("clear");

cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
cout << "                                                                                \n";
cout << "                                                                                \n";
cout << "                            Serendipity Booksellers                             \n";
cout << "                                   Main Menu                                    \n";
cout << "                                                                                \n";
cout << " 1. Cashier Module                                                              \n";
cout << " 2. Inventory Database Module                                                   \n";
cout << " 3. Reports Module                                                              \n";
cout << " 4. Exit                                                                        \n";
cout << "                                                                                \n";
cout << "                                                                                \n";
cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";

cout << left << "\nEnter your choice: ";
cin >> Choice;

// Switch statement for menu.
switch (Choice) {
case '1':
        if (bookCount > 0) {
                cout << "\n" << "You selected item: 1" << endl;
                cout << "Press ENTER to continue..." << endl;
                cin.ignore();
                cin.get();
                cashier(array, bookCount);
        }
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
