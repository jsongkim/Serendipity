#include <iostream>
#include <iomanip>
#include <string>
#include "bookType.h"
using namespace std;

void bookInfo(bookType array[], int bookIndex){

cout << "▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀\n";
cout << "                                                                                \n";
cout << "                                                                                \n";
cout << "                            Serendipity Booksellers                             \n";
cout << "                               Book Information                                 \n";
cout << "                                                                                \n";
cout << " Book Title                        : --- " << setw(39) << array[bookIndex].getTitle() << "\n";
cout << " ISBN                              : --- " << setw(39) << array[bookIndex].getISBN() << "\n";
cout << " Author                            : --- " << setw(39) << array[bookIndex].getAuthor() << "\n";
cout << " Publisher                         : --- " << setw(39) << array[bookIndex].getPub() << "\n";
cout << " Date Added <MM/DD/YYYY>           : --- " << setw(39) << array[bookIndex].getDateAdded() << "\n";
cout << " Quantity on Hand                  : --- " << setw(39) << array[bookIndex].getQtyOnHand() << "\n";
cout << " Wholesale Price                   : --- " << setw(39) << array[bookIndex].getWholesale() << "\n";
cout << " Retail Price                      : --- " << setw(39) << array[bookIndex].getRetail() << "\n";
cout << "                                                                                \n";
cout << "                                                                                \n";
cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";

return;
}
