/**
 * @file bookType.h
 * @brief Book inventory item class
 */

#ifndef BOOKTYPE_H
#define BOOKTYPE_H

#include <string>

/**
 * @class bookType
 * @brief Represents a book in the inventory system
 * 
 * @dot
 * digraph bookType {
 *   node [shape=record, fontname=Helvetica, fontsize=10];
 *   bookType [label="{
 *     bookType|
 *     - bookTitle : string\l
 *     - isbn : string\l
 *     - author : string\l
 *     - publisher : string\l
 *     - dateAdded : string\l
 *     - qtyOnHand : int\l
 *     - wholesale : float\l
 *     - retail : float\l
 *     - bookCount : static int\l|
 *     + bookType()\l
 *     + bookType(string,string,string,string,string,int,float,float)\l
 *     + getTitle() : string\l
 *     + getISBN() : string\l
 *     + getAuthor() : string\l
 *     + getPub() : string\l
 *     + getDateAdded() : string\l
 *     + getQtyOnHand() : int\l
 *     + getWholesale() : float\l
 *     + getRetail() : float\l
 *     + getBookCount() : int\l
 *     + setTitle(string) : void\l
 *     + setISBN(string) : void\l
 *     + setAuthor(string) : void\l
 *     + setPub(string) : void\l
 *     + setDateAdded(string) : void\l
 *     + setQtyOnHand(int) : void\l
 *     + setWholesale(float) : void\l
 *     + setRetail(float) : void\l
 *     + incBookCount() : static void\l
 *     + decBookCount() : static void\l
 *     + print() : void\l
 *     + bookInfo() : void\l
 *     + equals(bookType) : bool\l
 *   }"];
 * }
 * @enddot
 */
class bookType {
private:
        string bookTitle;   ///< Title of the book
        string isbn;        ///< International Standard Book Number
        string author;      ///< Author(s) of the book
        string publisher;  ///< Publishing company
        string dateAdded;  ///< Date when book was added to inventory (MM/DD/YYYY)
        int qtyOnHand;     ///< Current quantity in inventory
        float wholesale;   ///< Wholesale cost per unit
        float retail;      ///< Retail price per unit
        static int bookCount; ///< Static counter of total books in inventory

public:
        /**
         * @brief Default constructor
         */
        bookType() {}

        /**
         * @brief Parameterized constructor
         * @param bookTitle Title of the book
         * @param isbn ISBN number
         * @param author Author name
         * @param publisher Publisher name
         * @param dateAdded Date added to inventory
         * @param qtyOnHand Initial quantity
         * @param wholesale Wholesale price
         * @param retail Retail price
         */
        bookType(string bookTitle, string isbn, string author, string publisher, 
                string dateAdded, int qtyOnHand, float wholesale, float retail) {
                this->bookTitle = bookTitle;
                this->isbn = isbn;
                this->author = author;
                this->publisher = publisher;
                this->dateAdded = dateAdded;
                this->qtyOnHand = qtyOnHand;
                this->wholesale = wholesale;
                this->retail = retail;
        }

        // Getter functions with Doxygen comments
        /**
         * @brief Gets book title
         * @return Title as string
         */
        string getTitle() const { return bookTitle; }

        /**
         * @brief Gets ISBN number
         * @return ISBN as string
         */
        string getISBN() const { return isbn; }

        /**
         * @brief Gets author name
         * @return Author as string
         */
        string getAuthor() const { return author; }

        /**
         * @brief Gets publisher name
         * @return Publisher as string
         */
        string getPub() const { return publisher; }

        /**
         * @brief Gets date added to inventory
         * @return Date as string (MM/DD/YYYY)
         */
        string getDateAdded() const { return dateAdded; }

        /**
         * @brief Gets current quantity in inventory
         * @return Quantity as integer
         */
        int getQtyOnHand() const { return qtyOnHand; }

        /**
         * @brief Gets wholesale price
         * @return Price as float
         */
        float getWholesale() const { return wholesale; }

        /**
         * @brief Gets retail price
         * @return Price as float
         */
        float getRetail() const { return retail; }

        /**
         * @brief Gets total count of books in inventory
         * @return Count as integer
         */
        int getBookCount() const { return bookCount; }

        // Setter functions with Doxygen comments
        /**
         * @brief Sets book title
         * @param t New title
         */
        void setTitle(string t) { bookTitle = t; }

        /**
         * @brief Sets ISBN number
         * @param i New ISBN
         */
        void setISBN(string i) { isbn = i; }

        /**
         * @brief Sets author name
         * @param a New author
         */
        void setAuthor(string a) { author = a; }

        /**
         * @brief Sets publisher name
         * @param p New publisher
         */
        void setPub(string p) { publisher = p; }

        /**
         * @brief Sets date added to inventory
         * @param d New date (MM/DD/YYYY)
         */
        void setDateAdded(string d) { dateAdded = d; }

        /**
         * @brief Sets quantity in inventory
         * @param q New quantity
         */
        void setQtyOnHand(int q) { qtyOnHand = q; }

        /**
         * @brief Sets wholesale price
         * @param w New wholesale price
         */
        void setWholesale(float w) { wholesale = w; }

        /**
         * @brief Sets retail price
         * @param r New retail price
         */
        void setRetail(float r) { retail = r; }

        /**
         * @brief Increments the static book count
         */
        static void incBookCount();

        /**
         * @brief Decrements the static book count
         */
        static void decBookCount();

        /**
         * @brief Prints basic book information
         */
        void print();

        /**
         * @brief Displays detailed book information
         */
        void bookInfo();

        /**
         * @brief Compares this book with another
         * @param other Book to compare with
         * @return True if books are identical, false otherwise
         */
        bool equals(bookType other);
};

#endif
