#include <string>
#include <iomanip>
#include <iostream>
#include <ctime>
#include "bookType.h"
#include "lookUpBook.h"
using namespace std;

int cashier(bookType array[], int bookCount) {

int index = 0;
// Variable declaration. Sets choice to 'Y' by default to facilitate loop.
string date;
int qty;
float total;
float tax;
char choice = 'Y';

// Do while loop for menu.
do{
system("clear");
cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
cout << "                                                                                \n";
cout << "                                                                                \n";
cout << "                            Serendipity Booksellers                             \n";
cout << "                                Cashier Module                                  \n";
cout << "                                                                                \n";
cout << "                                                                                \n";
cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";


 // Get the current time as a time_t object
 time_t now = time(0);

 // Convert it to a tm structure representing local time
 tm* localTime = localtime(&now);

 // Format the date as MM/DD/YYYY
 date = to_string(1 + localTime->tm_mon) + "/" + 
                     to_string(localTime->tm_mday) + "/" + 
                     to_string(1900 + localTime->tm_year);

do{
cout << "What book(s) will you be purchasing today?" << endl;
index = lookUpBook(array, bookCount);
} while (index == -1);

// Asks for quantity. If statement checks for valid input data type.
cout << "Quantity of Book: ";
cin >> qty;
if (cin.fail() == true){
        do{
                cin.clear();
                cin.ignore();
                cout << "Please enter a valid quantity:";
                cin >> qty;
        } while (std::cin.fail() == true);
}

// Calculates total price and tax.
total = qty * array[index].getRetail();
tax = 0.06 * total;

// Receipt printing.

system("clear");
cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
cout << "                                                                                \n";
cout << "                                                                                \n";
cout << "                            Serendipity Booksellers                             \n";
cout << " Date: " << setw(7) << date << "                                                                  \n";
cout << left << setw(9) << " Qty"      << std::left << setw(14) << "ISBN" << std::left << setw(38) << "Title" << std::left << setw(12) << "Price" << std::left << setw(8) << "Total     \n";
cout << "                                                                                \n";
cout << " " << std::left << setw(5) << qty     << std::left << setw(14) << array[index].getISBN() << std::left << setw(38) << array[index].getTitle() << std::left << setw(3) << "$ " << std::left << setw(9) << setprecision(2) << std::fixed << array[index].getRetail() << std::left << setw(3) << "$ " << std::left << setw(6) << setprecision(2) << std::fixed << total << setw(2) << " \n";
cout << "                                                                                \n";

cout << "" << setw(58) << "   " << std::left << setw(12) << "Subtotal" << std::left << setw(3) << "$ " << std::left << setw(6) << setprecision(2) << std::fixed << total << setw(2) << " \n";
cout << "" << setw(58) << "   " << std::left << setw(12) << "Tax" << std::left << setw(3) << "$ " << std::left << setw(6) << setprecision(2) << std::fixed << tax << setw(2) << " \n";
cout << "" << setw(58) << "   " << std::left << setw(12) << "Total" << std::left << setw(3) << "$ " << std::left << setw(6) << setprecision(2) << std::fixed << (total + tax) << setw(2) << " \n";
cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";

cout << "\nThank You for Shopping at Serendipity! \n\n";

array[index].setQtyOnHand(array[index].getQtyOnHand() - qty);

if (array[index].getQtyOnHand() <= 0) {
        array[index] = array[(bookCount - 1)];
        bookCount = bookCount - 1;
}

// Queries user for further transactions.
cout << "Would you like to make another transaction? (Y/N):";
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
        } while (choice != 'Y' && choice != 'N');
}
} while (choice == 'Y');
return bookCount;
}
