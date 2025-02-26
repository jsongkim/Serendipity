#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

void cashier() {

// Variable declaration. Sets choice to 'Y' by default to facilitate loop.
string date;
int qty;
string isbn;
string title;
float price;
float total;
float tax;
char choice = 'Y';

// Do while loop for menu.
do{
system("clear");
cout << "▛▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▜\n";
cout << "▌                                                                                ▐\n";
cout << "▌                                                                                ▐\n";
cout << "▌                            Serendipity Booksellers                             ▐\n";
cout << "▌                                Cashier Module                                  ▐\n";
cout << "▌                                                                                ▐\n";
cout << "▌                                                                                ▐\n";
cout << "▙▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▟\n";

cout << "\nDate: ";
std::getline(std::cin, date);

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

// Asks for ISBN. Check not necessary because it is a string.
cout << "ISBN: ";
cin.ignore();
getline(std::cin, isbn);

// Asks for title. Check not necessary because it is a string.
cout << "Title: ";
getline(std::cin, title);

// Asks for price. If statement checks for valid input data type.
cout << "Price: ";
cin >> price;
if (cin.fail() == true){
        do{
                cin.clear();
                cin.ignore();
                cout << "Please enter a valid price:";
                cin >> price;
        } while (cin.fail() == true);
}

// Calculates total price and tax.
total = qty * price;
tax = 0.06 * total;

// Receipt printing.

system("clear");
cout << "▛▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▜\n";
cout << "▌                                                                                ▐\n";
cout << "▌                                                                                ▐\n";
cout << "▌                            Serendipity Booksellers                             ▐\n";
cout << "▌ Date: " << setw(7) << date << "                                                                  ▐\n";
cout << left << setw(9) << "▌ Qty"      << std::left << setw(14) << "ISBN" << std::left << setw(38) << "Title" << std::left << setw(12) << "Price" << std::left << setw(8) << "Total     ▐\n";
cout << "▌                                                                                ▐\n";
cout << "▌ " << std::left << setw(5) << qty     << std::left << setw(14) << isbn << std::left << setw(38) << title << std::left << setw(3) << "$ " << std::left << setw(9) << setprecision(2) << std::fixed << price << std::left << setw(3) << "$ " << std::left << setw(6) << setprecision(2) << std::fixed << total << setw(2) << " ▐\n";
cout << "▌                                                                                ▐\n";

cout << "▌" << setw(58) << "   " << std::left << setw(12) << "Subtotal" << std::left << setw(3) << "$ " << std::left << setw(6) << setprecision(2) << std::fixed << total << setw(2) << " ▐\n";
cout << "▌" << setw(58) << "   " << std::left << setw(12) << "Tax" << std::left << setw(3) << "$ " << std::left << setw(6) << setprecision(2) << std::fixed << tax << setw(2) << " ▐\n";
cout << "▌" << setw(58) << "   " << std::left << setw(12) << "Total" << std::left << setw(3) << "$ " << std::left << setw(6) << setprecision(2) << std::fixed << (total + tax) << setw(2) << " ▐\n";
cout << "▙▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▟\n";

cout << "\nThank You for Shopping at Serendipity! \n\n";

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
return;
}
