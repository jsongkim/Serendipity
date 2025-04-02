/**
 * @file bookInfo.cpp
 * @brief Implementation of the book information display module for Serendipity Booksellers
 */

#include <iostream>
#include <iomanip>
#include <string>
#include "bookType.h"
using namespace std;

/**
 * @brief Displays detailed information about a specific book
 * 
 * @param array Array of bookType objects representing the inventory
 * @param bookIndex Index of the book in the array to display information for
 * 
 * @details This function displays a formatted view of all information for a specific book,
 * including:
 * - Title
 * - ISBN
 * - Author
 * - Publisher
 * - Date added
 * - Quantity on hand
 * - Wholesale price
 * - Retail price
 * 
 * The information is presented in a clean, formatted layout with borders for visual clarity.
 * No modifications to the book data are performed by this function.
 */
void bookInfo(bookType array[], int bookIndex) {
    // Display the header section
    cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
    cout << "                                                                                \n";
    cout << "                            Serendipity Booksellers                             \n";
    cout << "                               Book Information                                 \n";
    cout << "                                                                                \n";
    
    // Display all book information fields with proper formatting
    cout << " Book Title                        : --- " << setw(39) << array[bookIndex].getTitle() << "\n";
    cout << " ISBN                              : --- " << setw(39) << array[bookIndex].getISBN() << "\n";
    cout << " Author                            : --- " << setw(39) << array[bookIndex].getAuthor() << "\n";
    cout << " Publisher                         : --- " << setw(39) << array[bookIndex].getPub() << "\n";
    cout << " Date Added <MM/DD/YYYY>           : --- " << setw(39) << array[bookIndex].getDateAdded() << "\n";
    cout << " Quantity on Hand                  : --- " << setw(39) << array[bookIndex].getQtyOnHand() << "\n";
    cout << " Wholesale Price                   : --- " << setw(39) << array[bookIndex].getWholesale() << "\n";
    cout << " Retail Price                      : --- " << setw(39) << array[bookIndex].getRetail() << "\n";
    
    // Display the footer section
    cout << "                                                                                \n";
    cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";

    return;
}
