#include <string>
#include <iomanip>
#include <iostream>
#include <ctime>
#include "bookType.h"
#include "lookUpBook.h"
#include <algorithm>
using namespace std;

int cashier(bookType array[], int bookCount) {

int index = 0;
// Variable declaration. Sets choice to 'Y' by default to facilitate loop.
string date;
int qty;
float total;
float tax;
char choice = 'Y';
int holdPurchase[bookCount];
int holdQty[bookCount];
float grandTotal;
int i = 0;
int j = 0;
int w = 0;

std::fill_n(holdPurchase, bookCount, -1);
// Do while loop for menu.
        system("clear");
        cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
        cout << "                                                                                \n";
        cout << "                                                                                \n";
        cout << "                            Serendipity Booksellers                             \n";
        cout << "                                Cashier Module                                  \n";
        cout << "                                                                                 \n";
        cout << "                                                                                \n";
        cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";

        do{

                // Get the current time as a time_t object
                time_t now = time(0);

                // Convert it to a tm structure representing local time
                tm* localTime = localtime(&now);

                // Format the date as MM/DD/YYYY
                date = to_string(1 + localTime->tm_mon) + "/" +
                     to_string(localTime->tm_mday) + "/" +
                     to_string(1900 + localTime->tm_year);

                                cout << "What book(s) will you be purchasing today?" << endl;
                                index = lookUpBook(array, bookCount);
                                if(index == -1)
                                {
                                        cout << "Press any button to continue" << endl;
               cin.get();
                                        break;
                                }

                        holdPurchase[i] = index;

                // Asks for quantity. If statement checks for valid input data type.
                cout << "Quantity of Book: ";
                cin >> qty;
                if (cin.fail() == true){
                do{
                cin.clear();
                cin.ignore();
                cout << "Please enter a valid quantity:";
                cin >> qty;
                }while (std::cin.fail() == true);
                }

                        holdQty[j] = qty;

                cout << "\n" << "Purchase Request: " << qty << " x " << array[index].getTitle() << endl;

                // Queries user for further transactions.
                cout << "\n" << "Would you like to make another transaction? (Y/N):";
                cin >> choice;
                cout << "\n";

                // Check for lowercase input.
                choice = std::toupper(choice);
                cin.ignore();

                // Check for inputs other than Y or N.
                if (choice != 'Y' && choice != 'N'){
                do{
                std::cout << "Please enter Y or N:";
                std::cin >> choice;
                choice = std::toupper(choice);
                std::cin.ignore();
                }while (choice != 'Y' && choice != 'N');
                }

                // Calculates total price and tax.
                total = qty * array[index].getRetail();
                tax = 0.06 * total;

                // Receipt printing.
                if(choice == 'N')
                {
                        system("clear");
                        while(holdPurchase[w] != -1)
                        {
                        cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
                        cout << "                                                                                \n";
                        cout << "                                                                                \n";
                        cout << "                            Serendipity Booksellers                             \n";
                        cout << " Date: " << setw(7) << date << "                                                                  \n";
                        cout << left << setw(9) << " Qty"      << std::left << setw(14) << "ISBN" << std::left << setw(38) << "Title" << std::left << setw(12) << "Price" << std::left << setw(8) << "Total     \n";
                        cout << "                                                                                \n";
                        cout << " " << std::left << setw(5) << holdQty[w] << std::left << setw(14) << array[index].getISBN() << std::left << setw(38) << array[holdPurchase[w]].getTitle() << std::left << setw(3) << "$ " << std::left << setw(9) << setprecision(2) << std::fixed << array[index].getRetail() << std::left << setw(3) << "$ " << std::left << setw(6) << setprecision(2) << std::fixed << total << setw(2) << " \n";
                        cout << "                                                                                \n";

                        cout << "" << setw(58) << "   " << std::left << setw(12) << "Subtotal" << std::left << setw(3) << "$ " << std::left << setw(6) << setprecision(2) << std::fixed << total << setw(2) << " \n";
                        cout << "" << setw(58) << "   " << std::left << setw(12) << "Tax" << std::left << setw(3) << "$ " << std::left << setw(6) << setprecision(2) << std::fixed << tax << setw(2) << " \n";
                        cout << "" << setw(58) << "   " << std::left << setw(12) << "Total" << std::left << setw(3) << "$ " << std::left << setw(6) << setprecision(2) << std::fixed << (total + tax) << setw(2) << " \n";
                        cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
                        grandTotal += (total + tax);
                        w++;
                        }
                        cout << "Grand Total: " << grandTotal;
                        cout << "\nThank You for Shopping at Serendipity! \n\n";

                        array[index].setQtyOnHand(array[index].getQtyOnHand() - qty);

                        if (array[index].getQtyOnHand() <= 0) {
                        array[index] = array[(bookCount - 1)];
                        bookCount = bookCount - 1;
                        }
                        cout << "Press any button to continue" << endl;
         cin.get();
                }
                i++;
                j++;
                }while (choice == 'Y');
        return bookCount;
}
