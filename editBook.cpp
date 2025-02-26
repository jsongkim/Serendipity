/**********************************************
 * Author: Kyle B
 * Assignment: G4
 * Date: 2/19/2025
 * Purpose: Delete book function, for deleting
 * user specified books
 *********************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include "bookType.h"

using namespace std;

int editBook(bookType array[], int count) {

  system("clear");
  int index = 0;
  char choice;
  char choice2;
  string tempTitle;
  string tempISBN;
  string tempAuthor;
  string tempPub;
  string tempDate;
  int tempQty = 0;
  double tempWhole = 0;
  double tempRetail = 0;

  cout << "==================================================================================\n";
  cout << "= Serendipity Booksellers                                                        =\n";
  cout << "= Edit Book                                                                      =\n";
  cout << "= Database Size: 20                                                              =\n";
  cout << "= Current Book Count: " << setw(20) << left << count << "                                       =\n";
  cout << "=                                                                                =\n";
  cout << "==================================================================================\n";
  cout << "Search:";
  index = lookUpBook(array, count);


  cout << "Is this the book you want to edit? <Y/N>: ";
  do{
   cin >> choice;
   choice = toupper(choice);
   if(!(choice == 'Y') && !(choice == 'N')){
   cout << "'" << choice << "'" << " is not a valid input" << endl;
   cout << "Please only enter " << "Y" << " or " << "N" << endl;
   }
  }while(!(choice == 'Y') && !(choice == 'N'));
  if(choice == 'Y') {
        tempTitle = array[index].bookTitle;
        tempISBN = array[index].isbn;
        tempAuthor = array[index].author;
        tempPub = array[index].publisher;
        tempDate = array[index].dateAdded;
        tempQty = array[index].qtyOnHand;
        tempWhole = array[index].wholesale;
        tempRetail = array[index].retail;
        do{
                system("clear");
      cout << "==================================================================================\n";
      cout << "= Serendipity Booksellers                                                        =\n";
      cout << "= Edit Book                                                                      =\n";
      cout << "=                                                                                =\n";
      cout << "= <1> Enter Book Title              > --- " << setw(39) << tempTitle << "=\n";
      cout << "= <2> Enter ISBN                    > --- " << setw(39) << tempISBN << "=\n";
      cout << "= <3> Edit Author                   > --- " << setw(39) << tempAuthor << "=\n";
      cout << "= <4> Enter Publisher               > --- " << setw(39) << tempPub << "=\n";
      cout << "= <5> Enter Date Added <MM/DD/YYYY> > --- " << setw(39) << tempDate << "=\n";
      cout << "= <6> Enter Quantity on Hand        > --- " << setw(39) << tempQty << "=\n";
      cout << "= <7> Enter Wholesale Cost          > --- " << setw(39) << tempWhole << "=\n";
      cout << "= <8> Enter Retail Price            > --- " << setw(39) << tempRetail << "=\n";
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
                  array[index].bookTitle = tempTitle;
             array[index].isbn = tempISBN;
                  array[index].author = tempAuthor;
                  array[index].publisher = tempPub;
                  array[index].dateAdded = tempDate;
                  array[index].qtyOnHand = tempQty;
                  array[index].wholesale = tempWhole;
                  array[index].retail = tempRetail;
                  break;
           case '0':
                  return count;
                  break;
           default:
                  cout << "Please enter a valid choice <1-9>:";
        cin >> choice2;
        cout << "\n";
        cin.ignore();
                  }
                  }while (choice2 != '0');
  }
  return count;

}
