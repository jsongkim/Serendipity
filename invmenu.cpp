/**
 * @file invmenu.cpp
 * @brief Implementation of the inventory menu for Serendipity Booksellers
 */

#include "bookType.h"
#include "addBook.cpp"
#include "lookUpBook.cpp"
#include "bookInfo.cpp"
#include "deleteBook.h"
#include "editBook.h"
#include <iomanip>
#include <iostream>
using namespace std;

/**
 * @brief Displays and manages the inventory menu
 * 
 * @param array Array of bookType objects representing the inventory
 * @param bookCount Current number of books in the inventory
 * @return int Updated count of books in the inventory
 * 
 * @details This function provides a menu interface for inventory management including:
 *          - Looking up books
 *          - Adding new books
 *          - Editing existing books
 *          - Deleting books
 *          - Returning to the main menu
 * 
 * The function handles user input validation and calls appropriate functions
 * for each inventory operation. It continues to display the menu until the user
 * chooses to return to the main menu.
 */
int invmenu(bookType array[], int bookCount){
    // Variable declaration.
    char choice;
    int bookIndex = 0;

    // Do while loop for looping menu.
    do{
        system("clear");

        cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
        cout << "                                                                                \n";
        cout << "                                                                                \n";
        cout << "                            Serendipity Booksellers                             \n";
        cout << "                                Inventory Menu                                  \n";
        cout << "                                                                                \n";
        cout << " 1. Look Up a Book                                                              \n";
        cout << " 2. Add a Book                                                                  \n";
        cout << " 3. Edit a Book's Record                                                        \n";
        cout << " 4. Delete a Book                                                               \n";
        cout << " 5. Return to the Main Menu                                                     \n";
        cout << "                                                                                \n";
        cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";

        cout << "\nEnter your choice:";
        cin >> choice;

        // Switch statement for menu.
        switch (choice){
        case '1':
                if(bookCount == 0){
                        cout << "\n" << "There are no book entries available!" << endl;
                        cout << "Press ENTER to continue..." << endl;
                }
                else{
                        cout << "\n▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀";
                        cout << "\n                                 BOOK LOOK UP                                   ";
                        cout << "\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄";

                        bookIndex = lookUpBook(array, bookCount);
                if(!(bookIndex < 0)){
                        bookInfo(array, bookIndex);
                }
                        cout << setw(47) << "Press ENTER to continue..." << endl;
                }
                cin.ignore(80, '\n');
                cin.get();
                break;
        case '2':
                if(bookCount >= 20){
                        cout << "\n" << "The array is full!" << endl;
                        cout << "Press ENTER to continue..." << endl;
                        cin.ignore();
                        cin.get();
                        break;
                }
                bookCount = addBook(array, bookCount);
                break;
        case '3':
                if(bookCount == 0) {
                        cout << "\n" << "There are no book entries available!" << endl;
                        cout << "Press ENTER to continue..." << endl;
                        cin.ignore();
                        cin.get();
                        break;
                }
                else{
                        bookCount = editBook(array, bookCount);
                }
                if(!(bookIndex < 0)){
                        bookInfo(array, bookIndex);
                }
                break;
        case '4':
                if(bookCount == 0) {
                        cout << "\n" << "There are no book entries available!" << endl;
                        cout << "Press ENTER to continue..." << endl;
                        cin.ignore();
                        cin.get();
                        break;
                }
                else{
                        bookCount = deleteBook(array, bookCount);
                }
                if(!(bookIndex < 0)){
                        bookInfo(array, bookIndex);
                }
                break;
        case '5':
                cout << "\n" << setw(41) << "You selected item: 5" << endl;
                break;
        default:
                cout << "\n" << setw(60) << "Please enter a number in the range 1-5." << endl;
                cout << "Press ENTER to continue..." << endl;
                cin.ignore();
                cin.get();
        }
    }while(!(choice == '5'));

    return bookCount;
}
