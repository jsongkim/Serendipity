#include <string>
#include <iomanip>
#include <iostream>
#include <ctime>
#include "bookType.h"
#include "lookUpBook.h"
#include <algorithm>
using namespace std;

/**
 * @file cashier.cpp
 * @brief Implementation of the cashier module for Serendipity Booksellers
 */

#include <string>
#include <iomanip>
#include <iostream>
#include <ctime>
#include "bookType.h"
#include "lookUpBook.h"
#include <algorithm>
using namespace std;

/**
 * @brief Processes customer purchases and generates receipts
 * 
 * @param array Array of bookType objects representing inventory
 * @param bookCount Current number of books in inventory
 * @return Updated count of books in inventory after purchases
 */
int cashier(bookType array[], int bookCount) {
    string date;
    float grandTotal = 0.0;
    
    const int MAX_PURCHASES = 100;
    int purchaseIndices[MAX_PURCHASES] = {0};
    int purchaseQuantities[MAX_PURCHASES] = {0};
    int purchaseCount = 0;
    
    // Get current date
    time_t now = time(0);
    tm* localTime = localtime(&now);
    date = to_string(1 + localTime->tm_mon) + "/" +
           to_string(localTime->tm_mday) + "/" +
           to_string(1900 + localTime->tm_year);

    system("clear");
    cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
    cout << "                            Serendipity Booksellers                             \n";
    cout << "                                Cashier Module                                  \n";
    cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";

    // Main shopping loop
    bool continueShopping = true;
    while (continueShopping) {
        cout << "\nWhat book will you be purchasing today?" << endl;
        int index = lookUpBook(array, bookCount);
        if (index == -1) {
            cout << "Book not found. Press ENTER to continue" << endl;
            cin.get();
            break;
        }

        if (array[index].getQtyOnHand() <= 0) {
            cout << "This book is currently out of stock.\n";
            continue;
        }

        // Calculate available quantity considering current cart
        int availableQty = array[index].getQtyOnHand();
        for (int i = 0; i < purchaseCount; i++) {
            if (purchaseIndices[i] == index) {
                availableQty -= purchaseQuantities[i];
                break;
            }
        }

        int qty = 0;
        cout << "Quantity of Book (Available: " << availableQty << "): ";
        cin >> qty;
        while (cin.fail() || qty <= 0 || qty > availableQty) {
            cin.clear();
            cin.ignore(1000, '\n');
            if (qty > availableQty) {
                cout << "Only " << availableQty << " copies available. Please enter a valid quantity: ";
            } else {
                cout << "Please enter a valid quantity: ";
            }
            cin >> qty;
        }

        // Add to cart
        bool found = false;
        for (int i = 0; i < purchaseCount; i++) {
            if (purchaseIndices[i] == index) {
                purchaseQuantities[i] += qty;
                found = true;
                break;
            }
        }

        if (!found) {
            purchaseIndices[purchaseCount] = index;
            purchaseQuantities[purchaseCount] = qty;
            purchaseCount++;
        }

        cout << "\nAdded to cart: " << qty << " x " << array[index].getTitle() << endl;

        // Cart management menu
        int menuChoice;
        do {
				cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
            cout << "1. Continue shopping\n";
            cout << "2. View cart\n";
            cout << "3. Proceed to checkout\n";
		      cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n\n";

            cout << "Enter your choice: ";

            cin >> menuChoice;

            if (menuChoice == 2) {
                system("clear");
                cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
                cout << "                                YOUR SHOPPING CART                              \n";
                cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
                
                float cartTotal = 0.0;
                for (int i = 0; i < purchaseCount; i++) {
                    int index = purchaseIndices[i];
                    int qty = purchaseQuantities[i];
                    float price = array[index].getRetail();
                    float itemTotal = qty * price;
                    cartTotal += itemTotal;

                    cout << " " << left << setw(5) << qty 
                         << left << setw(38) << array[index].getTitle() 
                         << left << setw(3) << "$ " << left << setw(9) << fixed << setprecision(2) << price 
                         << left << setw(3) << "$ " << left << setw(6) << fixed << setprecision(2) << itemTotal 
                         << "\n";
                }
                cout << "\nCart Total: $" << fixed << setprecision(2) << cartTotal << endl;
                
					 cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
                cout << "1. Continue shopping\n";
                cout << "2. View cart\n";
                cout << "3. Proceed to checkout\n";
		          cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n\n";

                cout << "Enter your choice: ";
                cin >> menuChoice;
                
                if (menuChoice == 3) {
                    cout << "Enter item number to remove (1-" << purchaseCount << "): ";
                    int itemToRemove;
                    cin >> itemToRemove;
                    if (itemToRemove >= 1 && itemToRemove <= purchaseCount) {
                        for (int i = itemToRemove-1; i < purchaseCount-1; i++) {
                            purchaseIndices[i] = purchaseIndices[i+1];
                            purchaseQuantities[i] = purchaseQuantities[i+1];
                        }
                        purchaseCount--;
                        cout << "Item removed from cart.\n";
                    }
                }
            }
        } while (menuChoice == 2);

        if (menuChoice == 3) {
            continueShopping = false;
        }
    }

    // Checkout process
    if (purchaseCount > 0) {
        system("clear");
        cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
        cout << "                              REVIEW YOUR ORDER                                \n";
        cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
        
        float subtotal = 0.0;
        for (int i = 0; i < purchaseCount; i++) {
            int index = purchaseIndices[i];
            int qty = purchaseQuantities[i];
            float price = array[index].getRetail();
            float itemTotal = qty * price;
            subtotal += itemTotal;

            cout << " " << left << setw(5) << qty 
                 << left << setw(38) << array[index].getTitle() 
                 << left << setw(3) << "$ " << left << setw(9) << fixed << setprecision(2) << price 
                 << left << setw(3) << "$ " << left << setw(6) << fixed << setprecision(2) << itemTotal 
                 << "\n";
        }
        
        float tax = 0.06 * subtotal;
        grandTotal = subtotal + tax;
        
        cout << "\nSubtotal: $" << fixed << setprecision(2) << subtotal << endl;
        cout << "Tax: $" << fixed << setprecision(2) << tax << endl;
        cout << "Total: $" << fixed << setprecision(2) << grandTotal << endl;
        
        char confirm;
        cout << "\nConfirm purchase? <Y/N>: ";
        cin >> confirm;
        confirm = toupper(confirm);
        while (confirm != 'Y' && confirm != 'N') {
            cout << "Please enter Y or N: ";
            cin >> confirm;
            confirm = toupper(confirm);
        }

        if (confirm == 'Y') {
            system("clear");
            cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
            cout << "                            Serendipity Booksellers                             \n";
            cout << " Date: " << setw(7) << date << "                                                                  \n";
            cout << left << setw(9) << " Qty" << left << setw(14) << "ISBN" << left << setw(38) << "Title" 
                 << left << setw(12) << "Price" << left << setw(8) << "Total     \n";
            cout << "                                                                                \n";

            for (int i = 0; i < purchaseCount; i++) {
                int index = purchaseIndices[i];
                int qty = purchaseQuantities[i];
                array[index].setQtyOnHand(array[index].getQtyOnHand() - qty);

                cout << " " << left << setw(5) << qty 
                     << left << setw(14) << array[index].getISBN() 
                     << left << setw(38) << array[index].getTitle() 
                     << left << setw(3) << "$ " << left << setw(9) << fixed << setprecision(2) << array[index].getRetail() 
                     << left << setw(3) << "$ " << left << setw(6) << fixed << setprecision(2) << (qty * array[index].getRetail()) 
                     << setw(2) << " \n";
            }

            cout << "                                                                                \n";
            cout << "" << setw(58) << "   " << left << setw(12) << "Subtotal" << left << setw(3) << "$ " 
                 << left << setw(6) << fixed << setprecision(2) << subtotal << setw(2) << " \n";
            cout << "" << setw(58) << "   " << left << setw(12) << "Tax" << left << setw(3) << "$ " 
                 << left << setw(6) << fixed << setprecision(2) << tax << setw(2) << " \n";
            cout << "" << setw(58) << "   " << left << setw(12) << "Total" << left << setw(3) << "$ " 
                 << left << setw(6) << fixed << setprecision(2) << grandTotal << setw(2) << " \n";
            cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
            cout << "\nThank You for Shopping at Serendipity! \n\n";
        }
        else {
            cout << "\nOrder cancelled. No changes have been made to inventory.\n";
        }
    }

    cout << "Press ENTER to continue" << endl;
    cin.ignore();
    cin.get();
    return bookCount;
}
