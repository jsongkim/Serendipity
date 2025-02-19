//Kyle - presenting / doing bookInfo.cpp
#include <iostream>
#include <iomanip>
#include <string>
#include "bookType.h"
using namespace std;

void bookInfo(bookType array[], int bookIndex){

	cout << "Book Title:------------------------------------------ >" << array[bookIndex].bookTitle << endl;
	cout << "ISBN:------------------------------------------------ >" << array[bookIndex].isbn << endl;
	cout << "Author:---------------------------------------------- >" << array[bookIndex].author << endl;
	cout << "Publisher:------------------------------------------- >" << array[bookIndex].publisher << endl;
	cout << "Date Added:------------------------------------------ >" << array[bookIndex].dateAdded << endl;
	cout << "Quantity on Hand:------------------------------------ >" << array[bookIndex].qtyOnHand << endl;
	cout << "Wholesale:------------------------------------------- >" << array[bookIndex].wholesale << endl;
	cout << "Retail:---------------------------------------------- >" << array[bookIndex].retail << endl;
	
return;
}
//I think it works, I hope it works, rehualed version with better borders
