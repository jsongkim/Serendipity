#include <iostream>
#include <cstring>
#include "bookType.h"
using namespace std;

void lookUpBook(bookType array[], int bookCount){

  string title;
  int titleLength;
  bool match;
  char choice;

  cout << ">>> BOOK LOOK UP <<<" << endl;
  cout << "Search: >";
  cin >> title;

  titleLength = title.size();

  do{
       for(int g = 0; g < bookCount; g++)
       {
          for(size_t i = 0; i <= array[g].bookTitle.size() - titleLength; i++)
          {
             match = true;
             for(int j = 0; j < titleLength; j++)
             {
                if(array[g].bookTitle[i + j] != title[j])
                {
                   match = false;
                   break;
                }
             }
             if(match)
             {
                cout << "\n" << "RESULT>: " << array[g].bookTitle << endl;
                cout << "View this book record? <Y/N>: ";
                cin >> choice;
                break;
             }    
          }
          if(choice == 'y')
          {
             break;
          }
       }

  }while(!(choice == 'y'));

return;
}
