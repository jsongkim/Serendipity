/**********************************************
 * Author: Kyle B
 * Assignment: G4
 * Date: 2/19/2025
 * Purpose: Delete book function, for deleting
 * books
 *********************************************/

/*************
Modify the deleteBook Function
The deleteBook function is currently a stub function. Modify it so it performs
the following tasks:
• It should ask the user for the title or isbn of a book. This is the book that is
to be deleted from the inventory database.
• The function should search the bookTitle array for a title that matches
the one entered by the user. If no match is found, the function should display
a message indicating that the book is not in inventory, and return. If the
book is found, the function should call bookInfo, passing the correct data
as arguments.
• The function should ask the user if they are sure the book’s data are to be
deleted from the database.
• This function should work exactly the same as the edit function when it
comes to searching and confirming the delete.
*************/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <bits/stdc++.h>
#include <cctype>
#include "bookType.h"
#include "lookUpBook.cpp"
  
using namespace std;

int deleteBook() {

  system("clear");
  
  cout << "==================================================================================\n";
        cout << "= Serendipity Booksellers                                                        =\n";
        cout << "= Delete Book                                                                    =\n";
        cout << "= Database Size: 20                                                              =\n";
        cout << "= Current Book Count: " << setw(20) << left <<  << "                                       =\n";
        cout << "=                                                                                =\n";
        cout << "==================================================================================\n";
        cout << "Search: >";
        while () {
        cin >> identity;
        
          if () {
            
          }
        }

return count;
}
