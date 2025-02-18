#ifndef BOOKTYPE_H
#define BOOKTYPE_H

#include <string>
using namespace std;

struct bookType {
        string bookTitle;
        string isbn;
        string author;
        string publisher;
        string dateAdded;
        int qtyOnHand;
        double wholesale;
        double retail;
};

#endif
