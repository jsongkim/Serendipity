/**********************************************************
* Author: Joseph Song-Kim
* Assignment: G2
* Due Date: 2/4/2025
* Purpose: Cashier/receipt printing program meant for the 
* Serendipity application.
**********************************************************/

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	// Variable declaration. Sets choice to 'Y' by default to facilitate loop.
	std::string date;
	int qty;
	std::string isbn;
	std::string title;
	float price;
	float total;
	float tax;
	char choice = 'Y';

	do{
	// Asks for user date input, initial menu.
	std::cout 
	<< "Serendipity Booksellers          \n"
	<< "Cashier Module                   \n\n"
	<< "Date: ";
	std::getline(std::cin, date);

	// Asks for quantity. If statement checks for valid input data type.
	std::cout << "Quantity of Book: ";
	std::cin >> qty;
	if (std::cin.fail() == true){
		do{ 
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Please enter a valid quantity:";
			std::cin >> qty;
		} while (std::cin.fail() == true);
	}

	// Asks for ISBN. Check not necessary because it is a string.
	std::cout << "ISBN: ";
	std::cin.ignore();
	std::getline(std::cin, isbn);

	// Asks for title. Check not necessary because it is a string.
	std::cout << "Title: ";
	std::getline(std::cin, title);

	// Asks for price. If statement checks for valid input data type.
	std::cout << "Price: "; 
	std::cin >> price;
	if (std::cin.fail() == true){
		do{ 
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Please enter a valid price:";
			std::cin >> price;
		} while (std::cin.fail() == true);
	}

	// Calculates total price and tax.
	total = qty * price;
	tax = 0.06 * total;

	// Receipt printing.
	std::cout 
	<< "\nSerendipity Book Sellers \n"
	<< "Date:" << date << "\n\n"
	<< std::left << setw(5) << "Qty"	<< std::left << setw(14) << "ISBN" << std::left << setw(38) << "Title" << std::left << setw(12) << "Price" << std::left << setw(8) << "Total  \n";
	std::cout	
	<< "________________________________________________________________________________ \n\n";
	std::cout 
	<< std::left << setw(5) << qty	<< std::left << setw(14) << isbn << std::left << setw(38) << title << std::left << setw(3) << "$ " << std::left << setw(9) << setprecision(2) << std::fixed << price << std::left << setw(3) << "$ " << std::left << setw(5) << setprecision(2) << std::fixed << total << "\n\n";

	std::cout 
	<< setw(57) << " " << std::left << setw(12) << "Subtotal" << std::left << setw(3) << "$ " << std::left << setw(5) << setprecision(2) << std::fixed << total << "\n";
	std::cout
	<< setw(57) << " " << std::left << setw(12) << "Tax" << std::left << setw(3) << "$ " << std::left << setw(5) << setprecision(2) << std::fixed << tax << "\n";
	std::cout
	<< setw(57) << " " << std::left << setw(12) << "Total" << std::left << setw(3) << "$ " << std::left << setw(5) << setprecision(2) << std::fixed << (total + tax) << "\n\n";

	std::cout << "Thank You for Shoppig at Serendipity! \n\n";

	// Queries user for further transactions.
	std::cout << "Would you like to make another transaction? (Y/N):";
	std::cin >> choice;
	std::cout << "\n";
	// Check for lowercase input.
	choice = std::toupper(choice);
	std::cin.ignore();

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
	return 0;
}
