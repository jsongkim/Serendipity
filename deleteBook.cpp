/**
 * @file deleteBook.cpp
 * @brief Implementation of the book deletion module for Serendipity Booksellers
 */

#include <iostream>
#include <iomanip>
#include <string>
#include "bookType.h"
#include "bookInfo.h"
#include "lookUpBook.h"
using namespace std;

/**
 * @brief Deletes a book from the inventory
 * 
 * @param array Array of bookType objects representing the inventory
 * @param count Current number of books in inventory
 * @return Updated count of books after deletion
 * 
 * @details This function provides an interactive interface for:
 * - Searching for books to delete
 * - Confirming deletion choices
 * - Removing books from inventory
 * - Maintaining inventory integrity
 * 
 * The function handles:
 * - User confirmation prompts
 * - Input validation
 * - Proper array management when deleting items
 * - Multiple deletions in one session
 */
int deleteBook(bookType array[], int count) {
    system("clear");
    int index = -1;
    char choice;

    // Display header
    cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
    cout << "                            Serendipity Booksellers                             \n";
    cout << "                                  Delete Book                                   \n";
    cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";

    do {
        // Search for book to delete
        index = lookUpBook(array, count);
        if (index == -1) {
            cout << "Press ENTER to continue..." << endl;
            cin.ignore();
            cin.get();
            return count;
        }

        // Show book information
        bookInfo(array, index);

        // Confirm deletion
        cout << "\nIs this the book you want to delete? <Y/N>: ";
        do {
            cin >> choice;
            choice = toupper(choice);
            if (!(choice == 'Y') && !(choice == 'N')) {
                cout << "'" << choice << "' is not a valid input\n";
                cout << "Please only enter Y or N\n";
            }
        } while (!(choice == 'Y') && !(choice == 'N'));

        // Process deletion
        if (choice == 'Y') {
            array[index] = array[(count - 1)];  // Replace with last element
            count = count - 1;                  // Decrement count
            bookType::decBookCount();           // Update static counter
        }

        // Prompt for another deletion
        cout << "Delete another? <Y/N>: ";
        do {
            cin >> choice;
            choice = toupper(choice);
            if (!(choice == 'Y') && !(choice == 'N')) {
                cout << "'" << choice << "' is not a valid input\n";
                cout << "Please only enter Y or N\n";
            }
        } while (!(choice == 'Y') && !(choice == 'N'));

    } while (choice == 'Y');

    return count;
}
