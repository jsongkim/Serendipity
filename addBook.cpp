/**
 * @file addBook.cpp
 * @brief Implementation of the book addition module for Serendipity Booksellers
 */

#include "bookType.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

/**
 * @brief Adds a new book to the inventory database
 * 
 * @param array Array of bookType objects representing the inventory
 * @param count Current number of books in the inventory
 * @return Updated count of books in inventory after addition
 * 
 * @details This function provides an interactive menu for:
 * - Entering all book details (title, ISBN, author, etc.)
 * - Validating numeric inputs
 * - Saving the book to inventory when complete
 * - Returning to previous menu
 * 
 * The function maintains a temporary copy of all fields until the user
 * chooses to save the book to the database.
 */
int addBook(bookType array[], int count) {
    /// Temporary variables to store book data before saving
    char choice2;           ///< Menu choice input
    string tempTitle;       ///< Temporary storage for book title
    string tempISBN;        ///< Temporary storage for ISBN
    string tempAuthor;      ///< Temporary storage for author name
    string tempPub;         ///< Temporary storage for publisher
    string tempDate;        ///< Temporary storage for date added
    int tempQty = 0;       ///< Temporary storage for quantity on hand
    double tempWhole = 0;   ///< Temporary storage for wholesale price
    double tempRetail = 0;  ///< Temporary storage for retail price

    // Main menu loop
    do {
        system("clear");

        // Display menu header
        cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
        cout << "                                                                                \n";
        cout << "                            Serendipity Booksellers                             \n";
        cout << "                                   Add Book                                     \n";
        cout << " Database Size: 20                                                              \n";
        cout << " Current Book Count: " << setw(20) << left << count << "                                       \n";
        cout << "                                                                                \n";
        
        // Display menu options with current temporary values
        cout << " <1> Enter Book Title              > --- " << setw(39) << tempTitle << "\n";
        cout << " <2> Enter ISBN                    > --- " << setw(39) << tempISBN << "\n";
        cout << " <3> Edit Author                   > --- " << setw(39) << tempAuthor << "\n";
        cout << " <4> Enter Publisher               > --- " << setw(39) << tempPub << "\n";
        cout << " <5> Enter Date Added <MM/DD/YYYY> > --- " << setw(39) << tempDate << "\n";
        cout << " <6> Enter Quantity on Hand        > --- " << setw(39) << tempQty << "\n";
        cout << " <7> Enter Wholesale Cost          > --- " << setw(39) << tempWhole << "\n";
        cout << " <8> Enter Retail Price            > --- " << setw(39) << tempRetail << "\n";
        cout << " <9> Save Book to Database                                                      \n";
        cout << " <0> Return to Inventory Menu                                                   \n";
        cout << "                                                                                \n";
        cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
        
        // Get user menu choice
        cout << "\nChoice <1-9>:";
        cin >> choice2;
        cout << "\n";

        // Process menu choice
        switch (choice2) {
            case '1':  ///< Enter book title
                cout << "Title: ";
                cin.ignore();
                getline(cin, tempTitle);
                break;
                
            case '2':  ///< Enter ISBN
                cout << "ISBN: ";
                cin.ignore();
                getline(cin, tempISBN);
                break;
                
            case '3':  ///< Enter author
                cout << "Author: ";
                cin.ignore();
                getline(cin, tempAuthor);
                break;
                
            case '4':  ///< Enter publisher
                cout << "Publisher: ";
                cin.ignore();
                getline(cin, tempPub);
                break;
                
            case '5':  ///< Enter date added
                cout << "Date Added: ";
                cin.ignore();
                getline(cin, tempDate);
                break;
                
            case '6':  ///< Enter quantity with validation
                cout << "Quantity on Hand: ";
                cin.ignore();
                cin >> tempQty;
                if (cin.fail()) {
                    do {
                        cin.clear();
                        cin.ignore();
                        cout << "Please enter a valid input:";
                        cin >> tempQty;
                    } while (cin.fail());
                }
                break;
                
            case '7':  ///< Enter wholesale price with validation
                cout << "Wholesale Price: ";
                cin.ignore();
                cin >> tempWhole;
                if (cin.fail()) {
                    do {
                        cin.clear();
                        cin.ignore();
                        cout << "Please enter a valid input:";
                        cin >> tempWhole;
                    } while (cin.fail());
                }
                break;
                
            case '8':  ///< Enter retail price with validation
                cout << "Retail Price: ";
                cin.ignore();
                cin >> tempRetail;
                if (cin.fail()) {
                    do {
                        cin.clear();
                        cin.ignore();
                        cout << "Please enter a valid input:";
                        cin >> tempRetail;
                    } while (cin.fail());
                }
                break;
                
            case '9':  ///< Save book to database
                array[count].setTitle(tempTitle);
                array[count].setISBN(tempISBN);
                array[count].setAuthor(tempAuthor);
                array[count].setPub(tempPub);
                array[count].setDateAdded(tempDate);
                array[count].setQtyOnHand(tempQty);
                array[count].setWholesale(tempWhole);
                array[count].setRetail(tempRetail);
                count++;
                break;
                
            case '0':  ///< Return to inventory menu
                return count;
                
            default:  ///< Handle invalid menu choices
                cout << "Please enter a valid choice <1-9>:";
                cin >> choice2;
                cout << "\n";
                cin.ignore();
        }
    } while (choice2 != '0' && count != 20);

    return count;
}
