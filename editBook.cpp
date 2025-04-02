/**
 * @file editBook.cpp
 * @brief Implementation of the book editing module for Serendipity Booksellers
 */

#include <iostream>
#include <iomanip>
#include <string>
#include "bookType.h"
#include "lookUpBook.h"

using namespace std;

/**
 * @brief Modifies book information in the inventory
 * 
 * @param array Array of bookType objects representing the inventory
 * @param count Current number of books in inventory
 * @return int Updated count of books after editing
 * 
 * @details This function provides an interactive interface for:
 * - Searching and selecting books to edit
 * - Modifying individual book attributes
 * - Validating user input
 * - Saving changes back to inventory
 * 
 * The function features:
 * - Menu-driven attribute modification
 * - Temporary storage of changes before commit
 * - Input validation for numeric fields
 * - Visual confirmation of current values
 * 
 * @note The function uses temporary variables to store edits until explicitly saved
 * @warning Changes are only saved when option 9 is selected
 * @see bookType, lookUpBook()
 */
int editBook(bookType array[], int count) {
    system("clear");
    int index = 0;
    char choice;
    char choice2;
    
    // Temporary variables for editing
    string tempTitle;
    string tempISBN;
    string tempAuthor;
    string tempPub;
    string tempDate;
    int tempQty = 0;
    double tempWhole = 0;
    double tempRetail = 0;

    // Display header
    cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
    cout << "                            Serendipity Booksellers                             \n";
    cout << "                                   Edit Book                                    \n";
    cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n\n";

    // Search for book to edit
    cout << "Search:";
    index = lookUpBook(array, count);

    if(index == -1) {
        cout << "Press ENTER to continue..." << endl;
        cin.ignore();
        cin.get();
        return count;
    }

    // Confirm book selection
    cout << "Is this the book you want to edit? <Y/N>: ";
    do {
        cin >> choice;
        choice = toupper(choice);
        if(!(choice == 'Y') && !(choice == 'N')) {
            cout << "'" << choice << "' is not a valid input" << endl;
            cout << "Please only enter Y or N" << endl;
        }
    } while(!(choice == 'Y') && !(choice == 'N'));

    if(choice == 'Y') {
        // Load current values into temporary variables
        tempTitle = array[index].getTitle();
        tempISBN = array[index].getISBN();
        tempAuthor = array[index].getAuthor();
        tempPub = array[index].getPub();
        tempDate = array[index].getDateAdded();
        tempQty = array[index].getQtyOnHand();
        tempWhole = array[index].getWholesale();
        tempRetail = array[index].getRetail();

        // Editing menu loop
        do {
            system("clear");
            // Display editing interface
            cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
            cout << "                            Serendipity Booksellers                             \n";
            cout << "                                  Edit Book                                     \n";
            cout << " Database Size: 20                                                              \n";
            cout << " Current Book Count: " << setw(20) << left << count << "                                       \n";
            cout << "                                                                                \n";
            cout << " <1> Enter Book Title              > --- " << setw(39) << tempTitle << "\n";
            cout << " <2> Enter ISBN                    > --- " << setw(39) << tempISBN << "\n";
            cout << " <3> Edit Author                   > --- " << setw(39) << tempAuthor << "\n";
            cout << " <4> Enter Publisher               > --- " << setw(39) << tempPub << "\n";
            cout << " <5> Enter Date Added <MM/DD/YYYY> > --- " << setw(39) << tempDate << "\n";
            cout << " <6> Enter Quantity on Hand        > --- " << setw(39) << tempQty << "\n";
            cout << " <7> Enter Wholesale Cost          > --- " << setw(39) << tempWhole << "\n";
            cout << " <8> Enter Retail Price            > --- " << setw(39) << tempRetail << "\n";
            cout << " <9> Save New Book to Database                                                  \n";
            cout << " <0> Return to Inventory Menu                                                   \n";
            cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
            cout << "\nChoice <1-9>:";
            cin >> choice2;
            cout << "\n";

            // Process menu selection
            switch (choice2) {
                case '1':  // Edit title
                    cout << "Title: ";
                    cin.ignore();
                    getline(cin, tempTitle);
                    break;
                    
                case '2':  // Edit ISBN
                    cout << "ISBN: ";
                    cin.ignore();
                    getline(cin, tempISBN);
                    break;
                    
                case '3':  // Edit author
                    cout << "Author: ";
                    cin.ignore();
                    getline(cin, tempAuthor);
                    break;
                    
                case '4':  // Edit publisher
                    cout << "Publisher: ";
                    cin.ignore();
                    getline(cin, tempPub);
                    break;
                    
                case '5':  // Edit date
                    cout << "Date Added: ";
                    cin.ignore();
                    getline(cin, tempDate);
                    break;
                    
                case '6':  // Edit quantity with validation
                    cout << "Quantity on Hand: ";
                    cin.ignore();
                    cin >> tempQty;
                    if (cin.fail()) {
                        do {
                            cin.clear();
                            cin.ignore();
                            cout << "Please enter a valid quantity: ";
                            cin >> tempQty;
                        } while (cin.fail());
                    }
                    break;
                    
                case '7':  // Edit wholesale price with validation
                    cout << "Wholesale Price: ";
                    cin.ignore();
                    cin >> tempWhole;
                    if (cin.fail()) {
                        do {
                            cin.clear();
                            cin.ignore();
                            cout << "Please enter a valid price: ";
                            cin >> tempWhole;
                        } while (cin.fail());
                    }
                    break;
                    
                case '8':  // Edit retail price with validation
                    cout << "Retail Price: ";
                    cin.ignore();
                    cin >> tempRetail;
                    if (cin.fail()) {
                        do {
                            cin.clear();
                            cin.ignore();
                            cout << "Please enter a valid price: ";
                            cin >> tempRetail;
                        } while (cin.fail());
                    }
                    break;
                    
                case '9':  // Save changes
                    array[index].setTitle(tempTitle);
                    array[index].setISBN(tempISBN);
                    array[index].setAuthor(tempAuthor);
                    array[index].setPub(tempPub);
                    array[index].setDateAdded(tempDate);
                    array[index].setQtyOnHand(tempQty);
                    array[index].setWholesale(tempWhole);
                    array[index].setRetail(tempRetail);
                    break;
                    
                case '0':  // Exit without saving
                    return count;
                    
                default:  // Handle invalid input
                    cout << "Please enter a valid choice <1-9>:";
                    cin >> choice2;
                    cout << "\n";
                    cin.ignore();
            }
        } while (choice2 != '0');
    }
    return count;
}
