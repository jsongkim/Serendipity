#include <string>
#include <iomanip>
#include <iostream>
#include <ctime>
#include "bookType.h"
#include <limits>
#include "lookUpBook.h"
#include <algorithm>
using namespace std;

// Helper function to truncate strings to fit within specified width
string truncateString(const string& str, size_t width) {
    if (str.length() > width) {
        return str.substr(0, width - 3) + "...";  // Add ellipsis if truncated
    }
    return str;
}

int repListing(bookType array[], int bookCount) {
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
    
    // First page (first 10 books)
    for (int i = 0; i < min(10, bookCount); i++) {
        cout << left << setw(60) << truncateString(array[i].getTitle(), 60)
             << left << setw(14) << truncateString(array[i].getISBN(), 14)
             << left << setw(14) << truncateString(array[i].getAuthor(), 14)
             << left << setw(14) << truncateString(array[i].getPub(), 14)
             << left << setw(12) << date
             << left << setw(8) << array[i].getQtyOnHand()
             << left << setw(14) << array[i].getWholesale()
             << left << setw(14) << array[i].getRetail() << endl;
    }
    
    cout << "\n\nPress ENTER to continue.\n";
    cin.ignore();
    cin.get();
    
    // Only show second page if there are more than 10 books
    if (bookCount > 10) {
        system("clear");
        cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
        cout << "                                                                  Serendipity Booksellers                                                                                                              \n";
        cout << " Date: " << setw(7) << date << "                                                                  \n";
        cout << left << setw(60) << "Title" << left << setw(14) << "ISBN" << left << setw(14) << "Author" << left << setw(14) << "Publisher" << left << setw(12) << "Date Added" << left << setw(8) << "Qty O/H" << left << setw(12) << "Wholesale Cost" << left << setw(12) << "Retail Price";
        cout << "\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";

        for (int i = 10; i < bookCount; i++) {
            cout << left << setw(60) << truncateString(array[i].getTitle(), 60)
                 << left << setw(14) << truncateString(array[i].getISBN(), 14)
                 << left << setw(14) << truncateString(array[i].getAuthor(), 14)
                 << left << setw(14) << truncateString(array[i].getPub(), 14)
                 << left << setw(12) << date
                 << left << setw(8) << array[i].getQtyOnHand()
                 << left << setw(12) << array[i].getWholesale()
                 << left << setw(12) << array[i].getRetail() << endl;
        }
        cout << "\n\nPress ENTER to continue.\n";
        cin.get();
    }
    
    return bookCount;
}
