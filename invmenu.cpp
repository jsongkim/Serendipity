/**********************************************
 * Author: David Pena
 * Assignment: Serendipity
 * Date: 2/4/2025
 * Purpose: Menu for different inventory
 * options apart of Serendipity.
 *********************************************/
#include <iomanip>
#include <iostream>
using namespace std;

int main(){
  
  char choice;        //holds a char for easier input validation

  do{
     //hardcoded menu
     cout << setw(46) << "Serendipity Booksellers" << endl;
     cout << setw(43) << "Inventory Database" << endl;
     cout << "\n" << setw(38) << "1. Look Up a Book" << endl;
     cout << setw(34) << "2. Add a Book" << endl;
     cout << setw(44) << "3. Add a Book" << endl;
     cout << setw(37) << "4. Add a Book" << endl;
     cout << setw(47) << "5. Add a Book" << endl;
     cout << "\n" << setw(39) << "Enter Your Choice:";

     do{
         //Asks for user input as well ass validates the input and pauses the terminal
         cin >> choice;        //input prompt

         swtich (choice){
         case '1':
            cout << "\n" << setw(41) << "You selected item: 1" << "\n" << endl;
            break;
         case '2':
            cout << "\n" << setw(41) << "You selected item: 2" << "\n" << endl;
            break;
         case '3':
            cout << "\n" << setw(41) << "You selected item: 1" << "\n" << endl;
            break;
         case '4';
            cout << "\n" << setw(41) << "You selected item: 1" << "\n" << endl;
            break;
         case '5':
            cout << "\n" << setw(41) << "You selected item: 1" << "\n" << endl;
            break;
         default:
            cout << "\n" << setw(60) << "Please enter a number in the range 1-5." << "\n" << endl;    //input validation
          }
     }while(choice == '\n');      //pauses the terminal

  }while(!(choice == '5'));       //exits inventory menu

  return 0;
}
