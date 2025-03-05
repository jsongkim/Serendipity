#ifndef BOOKTYPE_H
#define BOOKTYPE_H
#include <iostream>
#include <iostream>
#include <string>
#include <iomanip>
#include <iomanip>
using namespace std;

class bookType {
        private:
                string bookTitle;
                string isbn;
                string author;
                string publisher;
                string dateAdded;
                int qtyOnHand;
                float wholesale;
                float retail;
                static int bookCount;
        public:
                //constructor
                bookType() {}
                bookType(string bookTitle, string isbn, string author, string publisher, string dateAdded, int qtyOnHand, float wholesale, float retail) {
                        this->bookTitle = bookTitle;
                        this->isbn = isbn;
                        this->author = author;
                        this->publisher = publisher;
                        this->dateAdded = dateAdded;
                        this->qtyOnHand = qtyOnHand;
                        this->wholesale = wholesale;
                        this->retail = retail;
                }

                //getter functions
                string getTitle() const {
                        return bookTitle;
                }
                string getISBN() const {
                        return isbn;
                }
                string getAuthor() const {
                        return author;
                }
                string getPub() const {
                        return publisher;
                }
                string getDateAdded() const {
                        return dateAdded;
                }
                int getQtyOnHand() const {
                        return qtyOnHand;
                }
                float getWholesale() const {
                        return wholesale;
                }
                float getRetail() const {
                        return retail;
                }
                int getBookCount() const {
                        return bookCount;
                }

                //Setter functions
                void setTitle(string t) {
                        bookTitle = t;
                }
                void setISBN(string i) {
                        isbn = i;
                }
                void setAuthor(string a) {
                        author = a;
                }
                void setPub(string p) {
                        publisher = p;
                }
                void setDateAdded(string d) {
                        dateAdded = d;
                }
                void setQtyOnHand(int q) {
                        qtyOnHand = q;
                }
                void setWholesale(float w) {
                        wholesale = w;
                }
                void setRetail(float r) {
                        retail = r;
                }
                static void incBookCount();
                static void decBookCount();

                //Print
                void print();
                void bookInfo();
                bool equals(bookType);

};

#endif
