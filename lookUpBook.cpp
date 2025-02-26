#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <cctype>
#include "bookType.h"
#include "lookUpBook.h"
using namespace std;

int lookUpBook(bookType array[], int bookCount){

   string title;
   string tempTitle;
   size_t titleLength;
   int bookIndex = 0;
   bool match = false;//change
   char choice = '\n';

   cin.ignore();
   getline(cin, title);

   transform(title.begin(), title.end(), title.begin(), ::tolower);
   titleLength = title.size();

   do{
         for(int g = 0; g < bookCount; g++)
         {
             bookIndex = g;
             tempTitle = array[g].bookTitle;
             transform(tempTitle.begin(), tempTitle.end(), tempTitle.begin(), ::tolower);
             for(size_t i = 0; i <= array[g].bookTitle.size() - titleLength; i++)
             {
                   if(titleLength > array[g].bookTitle.size())
                   {
                        break;
                   }
                   match = true;
                   for(size_t j = 0; j < titleLength; j++)
                   {
                        if(tempTitle[i + j] != title[j])//change
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
                                  cout << "\n"; 

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
         if(choice == 'N')
         {
             cout << "\n" << "Sorry we don't have what your looking for" << endl;
             return -1;
         }
         if((match == false) && (choice == '\n'))//change
         {
              cout << "\n" << "Sorry but there is no " << "'" << title << "'" << " in our inventory." << endl;
              return -1;
         }
      }while(!(choice == 'Y'));

    return bookIndex;
}
