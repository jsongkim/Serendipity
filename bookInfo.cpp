//Kyle - presenting / doing bookInfo.cpp

#include <iostream>
#include <iomanip>
#include <string>
//personal text function for making life easier
void coutCenter(const std::string& text, int width) {
    int pad = (width - text.size()) / 2;
    std::cout << std::setw(pad) << "" << text << std::endl;
}

//temp main for demo
int main() {

    std::string text [10] = {"Serendipity Booksellers",
                            "Book Information",
                            "ISBN:",
                            "Title:",
                            "Author:",
                            "Publisher:",
                            "Date Added:",
                            "Quantity-On-Hand:",
                            "Wholesale Cost:",
                            "Retail Price:"};
    int terminalWidth = 80;
    for (int i = 0; i < 10; ++i) {
      if(i<2){
        coutCenter(text[i], terminalWidth);
      } else {
        std::cout << text[i] << std::endl;
      }
    }
    return 0;
}


//backflip
