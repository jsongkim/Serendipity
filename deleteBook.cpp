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

int deleteBook(bookType array[], int count) {

  system("clear");
  int index = 0;
  char choice;

  cout << "==================================================================================\n";
  cout << "= Serendipity Booksellers                                                        =\n";
  cout << "= Delete Book                                                                    =\n";
  cout << "= Database Size: 20                                                              =\n";
  cout << "= Current Book Count: " << setw(20) << left << count << "                                       =\n";
  cout << "=                                                                                =\n";
  cout << "==================================================================================\n";
  cout << "Search:";
  index = lookUpBook(array, count);


  cout << "Is this the book you want to delete? <Y/N>: ";
  do{
   cin >> choice;
   choice = toupper(choice);
   if(!(choice == 'Y') && !(choice == 'N')){
   cout << "'" << choice << "'" << " is not a valid input" << endl;
   cout << "Please only enter " << "Y" << " or " << "N" << endl;
   }
  }while(!(choice == 'Y') && !(choice == 'N'));
  if(choice == 'Y') {
   array[index] = array[(count-1)];
   count = count - 1;
  }


  return count;

}
