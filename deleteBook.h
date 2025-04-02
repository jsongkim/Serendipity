/**
 * @file deleteBook.h
 * @brief Header for the book deletion module of Serendipity Booksellers
 */

#ifndef DELETEBOOK_H
#define DELETEBOOK_H

#include "bookType.h"

/**
 * @brief Deletes a book from the inventory system
 * 
 * @param array Array of bookType objects representing the current inventory
 * @param count Current number of books in the inventory
 * @return int Updated book count after deletion
 * 
 * @details This function provides the interface for:
 * - Searching and selecting books to delete
 * - Confirming deletion actions
 * - Maintaining inventory integrity after deletion
 * - Handling multiple deletions in a single session
 * 
 * The function features:
 * - Interactive user prompts
 * - Input validation
 * - Visual confirmation of book details
 * - Proper array management when removing elements
 * 
 * @note This function modifies the inventory array in-place and updates
 * the static book count in the bookType class.
 * 
 * @warning Deleting books is irreversible. Ensure proper user confirmation
 * is received before processing deletions.
 * 
 * @see bookType, lookUpBook(), bookInfo()
 */
int deleteBook(bookType array[], int count);

#endif
