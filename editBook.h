/**
 * @file editBook.h
 * @brief Header file for the book editing functionality.
 * 
 * This file contains the declaration of the function used to edit book records.
 */

#ifndef EDITBOOK_H
#define EDITBOOK_H

#include "bookType.h"

/**
 * @brief Edits an existing book record in the provided array.
 * 
 * This function allows the user to modify the details of a book in the given array
 * of book records. The user can select which book to edit and update its fields.
 * 
 * @param array An array of bookType structures containing book records.
 * @param count The number of books currently stored in the array.
 * @return int Returns the updated count of books (in case of any changes).
 * 
 * @note The function may prompt the user for input to select and edit the book.
 */
int editBook(bookType array[], int count);

#endif
