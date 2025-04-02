#include <string>
#include <iomanip>
#include <iostream>
#include <ctime>
#include "bookType.h"
#include <limits>
#include "lookUpBook.h"
#include <algorithm>
using namespace std;

string truncateString(const string& str, size_t width) {
    if (str.length() > width) {
        return str.substr(0, width - 3) + "...";
    }
    return str;
}

void displayPage(bookType array[], int bookCount, int startIdx, const string& date, int currentPage, int totalPages) {
    system("clear");
    cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
    cout << "                                                                  Serendipity Booksellers                                                                                                              \n";
    cout << " Date: " << setw(7) << date << "                                                                  \n";
    cout << left << setw(60) << "Title" << left << setw(14) << "ISBN" << left << setw(14) << "Author" << left << setw(14) << "Publisher" << left << setw(12) << "Date Added" << left << setw(8) << "Qty O/H" << left << setw(14) << "Wholesale Cost" << left << setw(14) << "Retail Price";
    cout << "\n▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";
    
    const int booksPerPage = 10;
    int endIdx = min(startIdx + booksPerPage, bookCount);
    
    for (int i = startIdx; i < endIdx; i++) {
        cout << left << setw(60) << truncateString(array[i].getTitle(), 60)
             << left << setw(14) << truncateString(array[i].getISBN(), 14)
             << left << setw(14) << truncateString(array[i].getAuthor(), 14)
             << left << setw(14) << truncateString(array[i].getPub(), 14)
             << left << setw(12) << date
             << left << setw(8) << array[i].getQtyOnHand()
             << left << setw(14) << array[i].getWholesale()
             << left << setw(14) << array[i].getRetail() << endl;
    }
    
    cout << "\nPage " << currentPage << " of " << totalPages;
    cout << "\n<N>ext Page <P>revious Page <Q>uit: ";
}

int repListing(bookType array[], int bookCount) {
    if (bookCount == 0) {
        system("clear");
        cout << "No books in inventory.\nPress ENTER to continue...";
        cin.ignore();
        cin.get();
        return bookCount;
    }

    string date;
    time_t now = time(0);
    tm* localTime = localtime(&now);
    date = to_string(1 + localTime->tm_mon) + "/" +
           to_string(localTime->tm_mday) + "/" +
           to_string(1900 + localTime->tm_year);

    const int booksPerPage = 10;
    int currentPage = 1;
    int totalPages = (bookCount - 1) / booksPerPage + 1;
    char input;
    
    do {
        int startIdx = (currentPage - 1) * booksPerPage;
        displayPage(array, bookCount, startIdx, date, currentPage, totalPages);
        
        cin >> input;
        input = toupper(input);
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        if (input == 'N' && currentPage < totalPages) {
            currentPage++;
        } 
        else if (input == 'P' && currentPage > 1) {
            currentPage--;
        }
        else if (input != 'Q') {
            cout << "\nInvalid option. Please try again.";
            cin.get();
        }
        
    } while (input != 'Q');
    
    return bookCount;
}
