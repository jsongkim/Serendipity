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
cout << " Book Title                        : --- " << setw(39) << array[bookIndex].bookTitle << "\n";
cout << " ISBN                              : --- " << setw(39) << array[bookIndex].isbn << "\n";
cout << " Author                            : --- " << setw(39) << array[bookIndex].author << "\n";
cout << " Publisher                         : --- " << setw(39) << array[bookIndex].publisher << "\n";
cout << " Date Added <MM/DD/YYYY>           : --- " << setw(39) << array[bookIndex].dateAdded << "\n";
cout << " Quantity on Hand                  : --- " << setw(39) << array[bookIndex].qtyOnHand << "\n";
cout << " Wholesale Price                   : --- " << setw(39) << array[bookIndex].wholesale << "\n";
cout << " Retail Price                      : --- " << setw(39) << array[bookIndex].retail << "\n";
cout << "                                                                                \n";
cout << "                                                                                \n";
cout << "▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n";

return;
}
