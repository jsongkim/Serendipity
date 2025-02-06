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
    cout << "\033[2J\033[1;1H";
    
     //hardcoded menu
     cout << setw(46) << "Serendipity Booksellers" << endl;
     cout << setw(43) << "Inventory Database" << endl;
     cout << "\n" << setw(38) << "1. Look Up a Book" << endl;
     cout << setw(34) << "2. Add a Book" << endl;
     cout << setw(44) << "3. Edit a Book's Record" << endl;
     cout << setw(37) << "4. Delete a Book" << endl;
     cout << setw(47) << "5. Return to the Main Menu" << endl;
     cout << "\n" << setw(39) << "Enter Your Choice:";

         //Asks for user input as well as validates the input and pauses the terminal
         cin >> choice;        //input prompt

         switch (choice){
         case '1':
            cout << "\n" << setw(41) << "You selected item: 1" << "\n" << endl;
            break;
         case '2':
            cout << "\n" << setw(41) << "You selected item: 2" << "\n" << endl;
            break;
         case '3':
            cout << "\n" << setw(41) << "You selected item: 3" << "\n" << endl;
            break;
         case '4':
            cout << "\n" << setw(41) << "You selected item: 4" << "\n" << endl;
            break;
         case '5':
            cout << "\n" << setw(41) << "You selected item: 5" << "\n" << endl;
            break;
         default:
            cout << "\n" << setw(60) << "Please enter a number in the range 1-5." << "\n" << endl;    //input validation
          }
     cout << setw(47) << "Press ENTER to continue..." << endl;
     cin.ignore(80, '\n');       //pauses the terminal
     cin.get(); 

  }while(!(choice == '5'));       //exits inventory menu

  return 0;
}
