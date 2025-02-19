#include <iostream>
#include <cstring>
#include "bookType.h"
using namespace std;

void lookUpBook(bookType array[], int bookCount){

  string title;
  int titleLength;
  bool match;
  char choice;

  cout << "\n" << ">>> BOOK LOOK UP <<<" << endl;
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
                   do{                                         
                        cin >> choice;         
                        choice = toupper(choice);         
                    
                        if((choice != 'Y') || (choice != 'N'))   
                        {                                     
                              cout << "'" << choice << "'" << " is not a valid input" << endl;     
                              cout << "Please only enter " << "Y" << "or" << "N" << endl;       
                        }                             
                     }while((choice != 'Y') || (choice != 'N'))      
                     break;                       
              }                 
              else                
              {             
                  cout << "\n" << "Sorry but there is no " << title << " in our inventory" << endl;   
                  cout << "Would you like to keep searching? <Y/N>: ";       
                  do{                      
                        cin >> choice;      
                        choice = toupper(choice);        
                                 
                        if(choice == 'Y')          
                        {                         
                            choice = 'N';     
                        }              
                        else if(choice == 'N')  
                        {            
                            choice = 'Y';    
                        }                  
                        else               
                        {               
                            cout << "'" << choice << "'" << " is not a valid input" << endl;  
                            cout << "Please only enter " << "Y" << "or" << "N" << endl; 
                        }                         
                    }while((choice != 'Y') || (choice != 'N'))    
                }
          }
          if(choice == 'Y')
          {
             break;
          }
       }

  }while(!(choice == 'Y'));

return;
}
