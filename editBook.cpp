//Not completed + i need a lot of help with it - ROUGH DRAFT
//Needs to display saved entries from addBook and also needs to be able to look up a book like lookUpBook
//In this program - to edit a book you have to look up the exact same words as the book title 
//Change the look up so it accepts partial matching terms
// Not sure if lines 71-81 actually display the books information
// Lines 107-114 need to display the current values of the book being edited
#include "bookType.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void editBook(bookType array[]) {
  string lookUpBook;
  string editTitle;
  string editISBN;
  string editAuthor;
  string editPub;
  string editDate;
  int editQty;
  double editWhole;
  double editRetail;
  char eChoice;
  int size = sizeof(array)/sizeof(array[0]);
  int count = 0;
  char eConfirm;
  char menuChoice;


//Ask user to enter title of a book - Look up book
do {
cout << "\033[2J\033[1;1H";
cout << setw(20) << "=================================================================================\n";
cout << setw(20) << "= Serendipity Booksellers                                                       =\n";
cout << setw(20) << "= Edit Book                                                                     =\n";
cout << setw(20) << "= Database Size: 20                                                             =\n";
cout << setw(20) <<" = Current Book Count: " << count << "                                           =\n";
cout << setw(20) << "= Please enter the title of the book you would like to edit.                    =\n";
cout << setw(20) << "=================================================================================\n" << endl;
cin.ignore();
getline(cin, lookUpBook);


//Tries to find the best match - look up book

bool found = false;
for (int i = 0; i < size, i++) {
  if (array[i].bookTitle == lookUpBook) {
    cout << "> " << i << endl;
  cout << "RESULT>: " << array[i].bookTitle;
found = true;
  cout << "View this book record? (Y/N)" << endl;
  cin.ignore();
  getline(cin, eChoice);
  }
if (!found) {
cout << "No matches were found." << endl;
}

if (eChoice == 'y' || eChoice == 'Y') {
  cout << "Press ENTER to continue..." << endl;
  cin.ignore(80, '\n');
  cin.get();
}
else {
cout << "Invalid Choice. Please enter Y or N." << endl;
getline(cin, eChoice);
cin.ignore();
}
}while(eChoice == 'n' || eChoice == 'N' && count != 20);
  do {
  //Display book's contents and ask again if this is the book they want to edit
  cout << "=================================================================================================\n";
  cout << "= Book Title:-------------------------------- > " << setw(49) << array[i].bookTitle << "=\n";
  cout << "= ISBN:-------------------------------------- > " << setw(49) << array[i].isbn << "=\n";
  cout << "= Author:------------------------------------ > " << setw(49) << array[i].author << "=\n";
  cout << "= Publisher:--------------------------------- > " << setw(49) << array[i].publisher << "=\n";
  cout << "= Date Added:-------------------------------- > " << setw(49) << array[i].dateAdded << "=\n";
  cout << "= Quantity on Hand:-------------------------- > " << setw(49) << array[i].qtyOnHand << "=\n";
  cout << "= Wholesale:--------------------------------- > " << setw(49) << array[i].wholesale << "=\n";
  cout << "= Retail:------------------------------------ > " << setw(49) << array[i].retail << "=\n";
  cout << "================================================================================================\n" << endl;
  cout << "Is this the book you want to EDIT? (Y/N)" << endl;
  cin.ignore(80, '\n');
  getline(cin, eConfirm);

    if (eConfirm == 'y' || eConfirm == 'Y') {
      cout << "Press ENTER to continue..." << endl;
      cin.ignore();
      cin.get();
    }
    else {
      cout << "Please enter either Y or N!" << endl;
      getline(cin, eConfirm);
      cin.ignore(80, \n');

  }while (eConfirm == 'n' || eConfirm == 'N';

do{
         system("clear");

        cout << "==================================================================================\n";
        cout << "= Serendipity Booksellers                                                        =\n";
        cout << "= Add Book                                                                       =\n";
        cout << "= Database Size: 20                                                              =\n";
        cout << "= Current Book Count: " << setw(20) << left << count << "CURRENT VALUES                         =\n";
        cout << "=                                                                                =\n";
        cout << "= <1> Enter Book Title              > --- " << setw(39) << editTitle << "=\n";
        cout << "= <2> Enter ISBN                    > --- " << setw(39) << editISBN << "=\n";
        cout << "= <3> Edit Author                   > --- " << setw(39) << editAuthor << "=\n";
        cout << "= <4> Enter Publisher               > --- " << setw(39) << editPub << "=\n";
        cout << "= <5> Enter Date Added <MM/DD/YYYY> > --- " << setw(39) << editDate << "=\n";
        cout << "= <6> Enter Quantity on Hand        > --- " << setw(39) << editQty << "=\n";
        cout << "= <7> Enter Wholesale Cost          > --- " << setw(39) << editWhole << "=\n";
        cout << "= <8> Enter Retail Price            > --- " << setw(39) << editRetail << "=\n";
        cout << "= <9> Save Book to Database                                                      =\n";
        cout << "= <0> Return to Inventory Menu                                                   =\n";
        cout << "=                                                                                =\n";
        cout << "==================================================================================\n";
        cout << "* Choice <1-9>:";
        cin >> menuSelection;
        cout << "\n";


        switch (menuChoice){
        case '1':
        cout << "Title: ";
                        cin.ignore();
                        getline(cin, editTitle);
        break;
        case '2':
        cout << "ISBN: ";
                        cin.ignore();
                        getline(cin, editISBN);
        break;
        case '3':
        cout << "Author: ";
                        cin.ignore();
                        getline(cin, editAuthor);
        break;
        case '4':
        cout << "Publisher: ";
                        cin.ignore();
                        getline(cin, editPub);
        break;
        case '5':
        cout << "Date Added: ";
                        cin.ignore();
                        getline(cin, editDate);
        break;
        case '6':
        cout << "Quantity on Hand: ";
                        cin.ignore();
                        cin >> editQty;
                        if (std::cin.fail() == true){
                        do{
                        std::cin.clear();
                        std::cin.ignore();
                        std::cout << "Please enter a valid input:";
                        std::cin >> editQty;
                        } while (std::cin.fail() == true);
                        }
        break;
        case '7':
        cout << "Wholesale Price: ";
                        cin.ignore();
                        cin >> editWhole;
                        if (std::cin.fail() == true){
                        do{
                        std::cin.clear();
                        std::cin.ignore();
                        std::cout << "Please enter a valid input:";
                        std::cin >> editWhole;
                        } while (std::cin.fail() == true);
                        }
        break;
		  case '8':
        cout << "Retail Price: ";
                        cin.ignore();
                        cin >> editRetail;
                        if (std::cin.fail() == true){
                        do{
                        std::cin.clear();
                        std::cin.ignore();
                        std::cout << "Please enter a valid input:";
                        std::cin >> editRetail;
                        } while (std::cin.fail() == true);
                        }
        break;
		  case '9':
								array[count].bookTitle = editTitle;
								array[count].isbn = editISBN;
								array[count].author = editAuthor;
								array[count].publisher = editPub;
								array[count].dateAdded = editDate;
								array[count].qtyOnHand = editQty;
								array[count].wholesale = editWhole;
								array[count].retail = editRetail;
								count++;
		  break;
		  case '0':
								return count;
		  break;
		  default:
		  						cout << "Please enter a valid choice <1-9>:";
                        cin >> menuChoice;
                        cout << "\n";
                        cin.ignore();
		  }
		  }while (menuChoice != '0' && count != 20);
		  return count;
}
return;
}

