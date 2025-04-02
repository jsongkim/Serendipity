/**
 * @file lookUpBook.h
 * @brief Header for book lookup functionality
 */

#ifndef LOOKUPBOOK_H
#define LOOKUPBOOK_H

/**
 * @brief Searches for a book in the inventory by title
 * @param array Array of bookType objects representing the inventory
 * @param bookCount Current number of books in the inventory
 * @return Index of the found book or -1 if not found/cancelled
 * 
 * @details Provides interface for searching books by title with partial matching.
 * The search is case-insensitive and skips out-of-stock items.
 */
int lookUpBook(bookType array[], int bookCount);

#endif
