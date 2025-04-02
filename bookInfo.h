/**
 * @file bookInfo.h
 * @brief Header file for the book information display module
 */

#ifndef BOOKINFO_H
#define BOOKINFO_H

#include "bookType.h"

/**
 * @brief Displays detailed information about a specific book
 * 
 * @param array Array of bookType objects representing the inventory
 * @param bookIndex Index of the book in the array to display information for
 * 
 * @details This function displays a formatted view of all information for a specific book,
 * including:
 * - Title
 * - ISBN
 * - Author
 * - Publisher
 * - Date added
 * - Quantity on hand
 * - Wholesale price
 * - Retail price
 * 
 * The information is presented in a clean, formatted layout with borders for visual clarity.
 * No modifications to the book data are performed by this function - it is read-only.
 */
void bookInfo(bookType array[], int bookIndex);

#endif
