/**
 * @file lookUpBook.cpp
 * @brief Implementation of book lookup functionality
 */

#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <cctype>
#include "lookUpBook.h"
using namespace std;

/**
 * @brief Searches for a book in the inventory by title
 * @param array Array of bookType objects representing the inventory
 * @param bookCount Current number of books in the inventory
 * @return Index of the found book in the array, or -1 if not found/cancelled
 * 
 * @details This function allows users to search for books by title (case-insensitive)
 * with partial matching capability. It skips out-of-stock books (quantity <= 0) and
 * prompts the user to confirm before returning a found book's index.
 * 
 * The search process:
 * 1. Prompts user for a title to search
 * 2. Performs case-insensitive partial matching
 * 3. Displays matches with available quantities
 * 4. Asks for confirmation before returning a match
 * 5. Handles various edge cases (empty input, no matches, user cancellation)
 */
int lookUpBook(bookType array[], int bookCount) {
    string title;
    string tempTitle;
    size_t titleLength;
    int bookIndex = 0;
    bool match = false;
    char choice = '\n';

    cout << "\n\nEnter book title to search: ";
    cin.ignore();
    getline(cin, title);

    transform(title.begin(), title.end(), title.begin(), ::tolower);
    titleLength = title.size();

    if (title.empty()) {
        cout << "No title entered." << endl;
        return -1;
    }

    do {
        for (int g = 0; g < bookCount; g++) {
            bookIndex = g;
            tempTitle = array[g].getTitle();
            transform(tempTitle.begin(), tempTitle.end(), tempTitle.begin(), ::tolower);
            
            // Skip out-of-stock books
            if (array[g].getQtyOnHand() <= 0) {
                continue;
            }

            for (size_t i = 0; i <= array[g].getTitle().size() - titleLength; i++) {
                if (titleLength > array[g].getTitle().size()) {
                    break;
                }
                
                match = true;
                for (size_t j = 0; j < titleLength; j++) {
                    if (tempTitle[i + j] != title[j]) {
                        match = false;
                        break;
                    }
                }
                
                if (match) {
                    do {
                        cout << "\nRESULT>: " << array[g].getTitle() 
                             << " (Available: " << array[g].getQtyOnHand() << ")" << endl;
                        cout << "View this book record? <Y/N>: ";
                        cin >> choice;
                        choice = toupper(choice);
                        cout << "\n";

                        if (!(choice == 'Y') && !(choice == 'N')) {
                            cout << "'" << choice << "' is not a valid input" << endl;
                            cout << "Please only enter Y or N" << endl;
                            cout << "Press any button to continue" << endl;
                            cin.ignore();
                            cin.get();
                        }
                    } while (!(choice == 'Y') && !(choice == 'N'));
                    break;
                }
            }
            if (choice == 'Y') {
                break;
            }
        }

        if (choice == 'N') {
            cout << "\nSearch cancelled." << endl;
            return -1;
        }
        
        if (!match && choice == '\n') {
            cout << "\nNo matching books found in our inventory." << endl;
            return -1;
        }
    } while (!(choice == 'Y'));

    return bookIndex;
}
