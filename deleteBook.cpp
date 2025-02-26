#include <iostream>
#include <iomanip>
#include <string>
#include "bookType.h"
#include "bookInfo.h"
#include "lookUpBook.h"
using namespace std;

int deleteBook(bookType array[], int count) {

system("clear");
int index = -1;
char choice;

cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
cout << "                                                                                \n";
cout << "                                                                                \n";
cout << "                            Serendipity Booksellers                             \n";
cout << "                                  Delete Book                                   \n";
cout << "                                                                                \n";
cout << "                                                                                \n";
cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n\n";

cout << "Search:";

do {
index = lookUpBook(array, count);
if(index == -1){
        cout << "Press ENTER to continue..." << endl;
        cin.ignore();
        cin.get();
        return count;
}

bookInfo(array, index);

cout << "\nIs this the book you want to delete? <Y/N>: ";
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

cout << "Delete another? <Y/N>";
cin << choice;
if(!(choice == 'Y') && !(choice == 'N')){
     cout << "'" << choice << "'" << " is not a valid input" << endl;
     cout << "Please only enter " << "Y" << " or " << "N" << endl;
     }

}while(choice == 'Y');



return count;

}
