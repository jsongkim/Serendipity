/**********************************************
 * Author: Kyle B
 * Assignment: G4
 * Date: 2/19/2025
 * Purpose: Delete book function, for deleting
 * user specified books
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
#include <string>
#include <bits/stdc++.h>
#include <cctype>
#include "bookType.h"
#include "lookUpBook.h"
  
using namespace std;





int deleteBook(bookType array[], int count) {

  system("clear");
  	
string title;
  string tempTitle;//change
  int titleLength;
  int bookIndex = 0;
  bool match;
  char choice = '\n';
	
  cout << "==================================================================================\n";
        cout << "= Serendipity Booksellers                                                        =\n";
        cout << "= Delete Book                                                                    =\n";
        cout << "= Database Size: 20                                                              =\n";
        cout << "= Current Book Count: " << setw(20) << left << count << "                                       =\n";
        cout << "=                                                                                =\n";
        cout << "==================================================================================\n";
        cout << "Search: >";
        cin >> title;
  
  transform(title.begin(), title.end(), title.begin(), ::tolower);//change
  titleLength = title.size();
  
  do{
      for(int g = 0; g < count; g++)
      {
          bookIndex = g;
          tempTitle = array[g].bookTitle;//change
          transform(tempTitle.begin(), tempTitle.end(), tempTitle.begin(), ::tolower);//change
          for(size_t i = 0; i <= array[g].bookTitle.size() - titleLength; i++)
          {
                match = true;
                for(int j = 0; j < titleLength; j++)
                {
                     if(tempTitle[i + j] != title[j])
                     {
                          match = false;
                          break;
                     }
                }
                if(match)
                {
                     cout << "\n" << "RESULT>: " << array[g].bookTitle << endl;
                     cout << "View this book record? <Y/N>: ";
                     do{
                           cin >> choice;
                           choice = toupper(choice);
        
                           if(!(choice == 'Y') && !(choice == 'N'))
                           {
                                 cout << "'" << choice << "'" << " is not a valid input" << endl;
                                 cout << "Please only enter " << "Y" << " or " << "N" << endl;
                           }
                       }while(!(choice == 'Y') && !(choice == 'N'));
                       break;
                }
          }
          if(choice == 'Y')
          {                                               
          	cout << "\n" << "Book Title:------------------------------------------ > " << array[count].bookTitle << endl;
		cout << "ISBN:------------------------------------------------ > " << array[count].isbn << endl;
		cout << "Author:---------------------------------------------- > " << array[count].author << endl;
		cout << "Publisher:------------------------------------------- > " << array[count].publisher << endl;
		cout << "Date Added:------------------------------------------ > " << array[count].dateAdded << endl;
		cout << "Quantity on Hand:------------------------------------ > " << array[count].qtyOnHand << endl;
		cout << "Wholesale:------------------------------------------- > " << array[count].wholesale << endl;
		cout << "Retail:---------------------------------------------- > " << array[count].retail << endl;
		cout << "Press any key to continue..." << endl;
		std::getchar();
		
                cout << "Is this the book you want to delete? <Y/N>: ";
                do{
                      cin >> choice;
                      choice = toupper(choice);
        
                      if(!(choice == 'Y') && !(choice == 'N'))
                      {
                           cout << "'" << choice << "'" << " is not a valid input" << endl;
                           cout << "Please only enter " << "Y" << " or " << "N" << endl;
                       }
                }while(!(choice == 'Y') && !(choice == 'N'));
                if(choice == 'Y') { 

	        for (int i = bookIndex; i < count - 1; ++i) {
 	           array[i] = array[i + 1];
 	        }

  	        count--;

		} else {
		break;
		}
          }
      }
      if((match == false) && (choice == '\n'))
      {
           cout << "\n" << "Sorry but there is no " << "'" << title << "'" << " in our inventory" << endl;
           return -1;
      }
    }while(!(choice == 'Y'));
  
  return count;

}




