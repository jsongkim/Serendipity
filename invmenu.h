/**
 * @file invmenu.h
 * @brief Header file for inventory menu functionality
 */

#ifndef INVMENU_H
#define INVMENU_H

#include "bookType.h"

/**
 * @brief Displays and manages the inventory menu
 * @param array Array of bookType objects representing the inventory
 * @param bookCount Current number of books in the inventory
 * @return Updated count of books in the inventory
 * 
 * @details Provides the interface for inventory management operations including:
 *          - Book lookup
 *          - Adding new books
 *          - Editing existing books
 *          - Deleting books
 *          - Returning to main menu
 */
int invmenu(bookType array[], int bookCount);

#endif
