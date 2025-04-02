#include <string>
#include <iomanip>
#include <iostream>
#include <ctime>
#include "bookType.h"
#include <limits>
#include "lookUpBook.h"
#include <algorithm>
using namespace std;

int repListing(bookType array[], int bookCount){
        string date;
        time_t now = time(0);
        tm* localTime = localtime(&now);
        date = to_string(1 + localTime->tm_mon) + "/" +
          to_string(localTime->tm_mday) + "/" +
          to_string(1900 + localTime->tm_year);

        system("clear");
   cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
   cout << "                                                                  Serendipity Booksellers                                                                                                              \n";
        cout << " Date: " << setw(7) << date << "                                                                  \n";
        cout << left << setw(60) << "Title" << left << setw(14) << "ISBN" << left << setw(14) << "Author" << left << setw(14) << "Publisher" << left << setw(12) << "Date Added" << left << setw(8) << "Qty O/H" << left << setw(14) << "Wholesale Cost" << left << setw(14) << "Retail Price";
        cout << "\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
        for (int i = 0; i < 10; i++) {
                cout << left << setw(60) << array[i].getTitle()
                                         << left << setw(14) << array[i].getISBN()
                << left << setw(14) << array[i].getAuthor()
                               << left << setw(14) << array[i].getPub()
                << left << setw(12) << date
                                         << left << setw(8) << array[i].getQtyOnHand()
                                         << left << setw(14) << array[i].getWholesale()
                                         << left << setw(14) << array[i].getRetail();
                                         cout << endl;
        }
        cout << "\n\nPress ENTER to continue.\n";
        cin.ignore();
        cin.get();
        system("clear");
        cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
   cout << "                                                                  Serendipity Booksellers                                                                                                              \n";
        cout << " Date: " << setw(7) << date << "                                                                  \n";
        cout << left << setw(60) << "Title" << left << setw(14) << "ISBN" << left << setw(14) << "Author" << left << setw(14) << "Publisher" << left << setw(12) << "Date Added" << left << setw(8) << "Qty O/H" << left << setw(12) << "Wholesale Cost" << left << setw(12) << "Retail Price";
        cout << "\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";

        for (int i = 10; i < bookCount; i++) {
                cout << left << setw(60) << array[i].getTitle()
                                         << left << setw(14) << array[i].getISBN()
                << left << setw(14) << array[i].getAuthor()
                               << left << setw(14) << array[i].getPub()
                << left << setw(12) << date
                                         << left << setw(8) << array[i].getQtyOnHand()
                                         << left << setw(12) << array[i].getWholesale()
                                         << left << setw(12) << array[i].getRetail();
                                         cout << endl;
        }
        cout << "\n\nPress ENTER to continue.\n";
        cin.get();
        return bookCount;
}
