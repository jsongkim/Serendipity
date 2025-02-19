#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <cctype>
#include "bookType.h"
#include "lookUpBook.h"
using namespace std;

int lookUpBook(bookType array[], int bookCount){
  
  string title;
  string tempTitle;//change
  int titleLength;
  int bookIndex = 0;
  bool match;
  char choice = '\n';
  
  cout << "\n" << ">>> BOOK LOOK UP <<<" << endl;
  cout << "Search: > ";
  cin >> title;
  
  transform(title.begin(), title.end(), title.begin(), ::tolower);//change
  titleLength = title.size();
  
  do{
      for(int g = 0; g < bookCount; g++)
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
              break;
          }
      }
      if((match == false) && (choice == '\n'))
      {
           cout << "\n" << "Sorry but there is no " << "'" << title << "'" << " in our inventory" << endl;
           return -1;
      }
    }while(!(choice == 'Y'));
  
  return bookIndex;
}
