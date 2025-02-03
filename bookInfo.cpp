//Kyle - presenting / doing bookInfo.cpp
#include <iostream>
#include <iomanip>
#include <string>

void coutCenter(const std::string& text, int width) {
    int pad = (width - text.size()) / 2;
    std::cout << "|" << std::setw(pad) << "" << text << std::setw(width - pad - text.size() - 1) << "|" << std::endl;
}

void coutBoxedLine(const std::string& text, int width) {
    std::cout << "| " << std::setw(width - 4) << std::left << text << " |" << std::endl;
}

void coutBorder(int width) {
    std::cout << "+";
    for (int i = 0; i < width - 2; ++i) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;
}

int main() {
    const int width = 80;

    std::string info [10] = {"Serendipity Booksellers",
                            "Book Information",
                            "ISBN:",
                            "Title:",
                            "Author:",
                            "Publisher:",
                            "Date Added:",
                            "Quantity-On-Hand:",
                            "Wholesale Cost:",
                            "Retail Price:"};
    coutBorder(width);
    coutCenter(info[0], width);
    coutCenter(info[1], width);
    for (int i = 2; i < 10; ++i) {
        coutBoxedLine(info[i], width);
    }
    coutBorder(width);
    return 0;
}
//I think it works, I hope it works, rehualed version with better borders
