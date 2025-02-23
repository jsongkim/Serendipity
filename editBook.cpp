/*********************************************
* Author: Eric Bernal                        *
* Assignment: G5                             *
* Due Date: 2/24/2025                        *
* Purpose: Edit a book entry from addbooks   *
*********************************************/
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include "bookType.h"
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int editBook(bookType array[], int count) {

  system("clear");
  	
  string title;
  string tempTitle; // FOR LOOK UP
  string tempTitle2; // FOR EDIT
  int titleLength;
  bool match;
  char choice = '\n';
	string tempAuthor;
	string tempISBN;
	string tempPub;
	string tempDate;
	int tempQty;
	float tempWhole;
	float tempRetail;
	char choice2;
	
  cout << "==================================================================================\n";
        cout << "= Serendipity Booksellers                                                        =\n";
        cout << "= Edit Book                                                                    =\n";
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
		
                cout << "Is this the book you want to edit? <Y/N>: ";
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

	        //edit book

	do{
		system("clear");
                     cout << "==================================================================================\n";
        cout << "= Serendipity Booksellers                                                        =\n";
        cout << "= Edit Book                                                                       =\n";
        cout << "= Database Size: 20                                                              =\n";
        cout << "= Current Book Count: " << setw(20) << left << count << "CURRENT VALUES               =\n";
        cout << "=                                                                                =\n";
        cout << "= <1> Edit Book Title              > --- " << setw(39) << array[count].bookTitle << "=\n";
        cout << "= <2> Edit ISBN                    > --- " << setw(39) << array[count].isbn << "=\n";
        cout << "= <3> Edit Author                   > --- " << setw(39) << array[count].author << "=\n";
        cout << "= <4> Edit Publisher               > --- " << setw(39) << array[count].publisher << "=\n";
        cout << "= <5> Edit Date Added <MM/DD/YYYY> > --- " << setw(39) << array[count].dateAdded << "=\n";
        cout << "= <6> Edit Quantity on Hand        > --- " << setw(39) << array[count].qtyOnHand << "=\n";
        cout << "= <7> Edit Wholesale Cost          > --- " << setw(39) << array[count].wholesale << "=\n";
        cout << "= <8> Edit Retail Price            > --- " << setw(39) << array[count].retail << "=\n";
        cout << "= <9> Save Book to Database                                                      =\n";
        cout << "= <0> Return to Inventory Menu                                                   =\n";
        cout << "=                                                                                =\n";
        cout << "==================================================================================\n";
        cout << "* Choice <1-9>:";
        cin >> choice2;
        cout << "\n";


        switch (choice2){
        case '1':
        cout << "Title: ";
                        cin.ignore();
                        getline(cin, tempTitle2);
        break;
        case '2':
        cout << "ISBN: ";
                        cin.ignore();
                        getline(cin, tempISBN);
        break;
        case '3':
        cout << "Author: ";
                        cin.ignore();
                        getline(cin, tempAuthor);
        break;
        case '4':
        cout << "Publisher: ";
                        cin.ignore();
                        getline(cin, tempPub);
        break;
        case '5':
        cout << "Date Added: ";
                        cin.ignore();
                        getline(cin, tempDate);
        break;
        case '6':
        cout << "Quantity on Hand: ";
                        cin.ignore();
                        cin >> tempQty;
                        if (std::cin.fail() == true){
                        do{
                        std::cin.clear();
                        std::cin.ignore();
                        std::cout << "Please enter a valid input:";
                        std::cin >> tempQty;
                        } while (std::cin.fail() == true);
                        }
        break;
        case '7':
        cout << "Wholesale Price: ";
                        cin.ignore();
                        cin >> tempWhole;
                        if (std::cin.fail() == true){
                        do{
                        std::cin.clear();
                        std::cin.ignore();
                        std::cout << "Please enter a valid input:";
                        std::cin >> tempWhole;
                        } while (std::cin.fail() == true);
                        }
        break;
		  case '8':
        cout << "Retail Price: ";
                        cin.ignore();
                        cin >> tempRetail;
                        if (std::cin.fail() == true){
                        do{
                        std::cin.clear();
                        std::cin.ignore();
                        std::cout << "Please enter a valid input:";
                        std::cin >> tempRetail;
                        } while (std::cin.fail() == true);
                        }
        break;
		  case '9':
								array[count].bookTitle = tempTitle2;
								array[count].isbn = tempISBN;
								array[count].author = tempAuthor;
								array[count].publisher = tempPub;
								array[count].dateAdded = tempDate;
								array[count].qtyOnHand = tempQty;
								array[count].wholesale = tempWhole;
								array[count].retail = tempRetail;
								
		  break;
		  case '0':
								return count;
		  break;
		  default:
		  						cout << "Please enter a valid choice <1-9>:";
                        cin >> choice2;
                        cout << "\n";
                        cin.ignore();
		  }
		  }while (choice2 != '0' && count != 20);

		}
	  	else {
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
