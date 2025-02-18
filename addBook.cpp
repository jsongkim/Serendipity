#include "bookType.h"

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void addBook(bookType array[]){
		  char choice2;
		  int count = 0;
		  string tempTitle;
		  string tempISBN;
		  string tempAuthor;
		  string tempPub;
		  string tempDate;
		  int tempQty;
		  double tempWhole;
		  double tempRetail;
        do{
        system("clear");

        cout << "==================================================================================\n";
        cout << "= Serendipity Booksellers                                                        =\n";
        cout << "= Add Book                                                                       =\n";
        cout << "= Database Size: 20                                                              =\n";
        cout << "= Current Book Count: " << setw(20) << left << count << "                                       =\n";
        cout << "=                                                                                =\n";
        cout << "= <1> Enter Book Title                                                           =\n";
        cout << "= <2> Enter ISBN                                                                 =\n";
        cout << "= <3> Edit Author                                                                =\n";
        cout << "= <4> Enter Publisher                                                            =\n";
        cout << "= <5> Enter Date Added <MM/DD/YYYY>                                              =\n";
        cout << "= <6> Enter Quantity on Hand                                                     =\n";
        cout << "= <7> Enter Wholesale Cost                                                       =\n";
        cout << "= <8> Enter Retail Price                                                         =\n";
        cout << "= <9> Save Book to Database                                                      =\n";
        cout << "= <0> Return to Inventory Menu                                                   =\n";
        cout << "=                                                                                =\n";
        cout << "==================================================================================\n";
        cout << "* Choice <1-9>:";
        cin >> choice2;
        cout << "\n";


        switch (choice2){
        case '1':
        cout << "Title: ";
                        cin.ignore();
                        getline(cin, tempTitle);
        break;
        case '2':
        cout << "ISBN: ";
                        cin.ignore();
                        getline(cin, tempISBN);
        break;
        case '3':
        cout << "Author: ";
                        cin.ignore();
                        getline(cin, tempAuthor);
        break;
        case '4':
        cout << "Publisher: ";
                        cin.ignore();
                        getline(cin, tempPub);
        break;
        case '5':
        cout << "Date Added: ";
                        cin.ignore();
                        getline(cin, tempDate);
        break;
        case '6':
        cout << "Quantity on Hand: ";
                        cin.ignore();
                        cin >> tempQty;
                        if (std::cin.fail() == true){
                        do{
                        std::cin.clear();
                        std::cin.ignore();
                        std::cout << "Please enter a valid input:";
                        std::cin >> tempQty;
                        } while (std::cin.fail() == true);
                        }
        break;
        case '7':
        cout << "Wholesale Price: ";
                        cin.ignore();
                        cin >> tempWhole;
                        if (std::cin.fail() == true){
                        do{
                        std::cin.clear();
                        std::cin.ignore();
                        std::cout << "Please enter a valid input:";
                        std::cin >> tempWhole;
                        } while (std::cin.fail() == true);
                        }
        break;
		  case '8':
        cout << "Retail Price: ";
                        cin.ignore();
                        cin >> tempRetail;
                        if (std::cin.fail() == true){
                        do{
                        std::cin.clear();
                        std::cin.ignore();
                        std::cout << "Please enter a valid input:";
                        std::cin >> tempRetail;
                        } while (std::cin.fail() == true);
                        }
        break;
		  case '9':
        cout << "Save Book to Database: ";
								array[count].bookTitle = tempTitle;
								array[count].isbn = tempISBN;
								array[count].author = tempAuthor;
								array[count].publisher = tempPub;
								array[count].dateAdded = tempDate;
								array[count].qtyOnHand = tempQty;
								array[count].wholesale = tempWhole;
								array[count].retail = tempRetail;
								count++;
		  break;
		  case '0':
		  break;
		  default:
		  						cout << "Please enter a valid choice <1-9>:";
                        cin >> choice2;
                        cout << "\n";
                        cin.ignore();
        }
        } while (choice2 != '0' && count != 20);
}
