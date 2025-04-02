/**
 * @file main.cpp
 * @brief Main program entry point for Serendipity Booksellers system
 */

#include <iostream>
#include <iomanip>
#include "cashier.h"
#include "invmenu.h"
#include "reports.h"
#include "bookType.h"
using namespace std;

/**
 * @brief Main function for Serendipity Booksellers application
 * @return Exit status (0 for normal termination)
 * 
 * @details This function serves as the main entry point for the Serendipity Booksellers
 * system. It provides a menu-driven interface with the following options:
 * 1. Cashier Module - Handles sales transactions
 * 2. Inventory Database Module - Manages book inventory
 * 3. Reports Module - Generates various reports
 * 4. Exit - Terminates the program
 * 
 * The function maintains an array of bookType objects (max 20) and manages the
 * current count of books in inventory. It includes input validation and proper
 * memory management.
 */
int main() {
    // Variable and array declaration.
    char Choice = '5';
    bookType array[20] = {};
    int bookCount = 0;

    // Do while loop for looping menu.
    do {
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
                reports(array);
                break;
        case '4':
                break;
        default:
                cout << "\n'" << Choice << "'" << "is invalid input. Please enter your choice again. \n";
                cout << "Press ENTER to continue..." << endl;
                cin.ignore();
                cin.get();
        }
    } while (Choice != '4');

    return 0;
}
