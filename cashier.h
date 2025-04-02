/**
 * @file cashier.h
 * @brief Header file for the cashier module of Serendipity Booksellers
 */

#ifndef CASHIER_H
#define CASHIER_H

#include "bookType.h"

/**
 * @brief Processes customer purchases and generates receipts
 * 
 * @param array Array of bookType objects representing the inventory
 * @param bookCount Current number of books in the inventory
 * @return Updated count of books in inventory after purchases
 * 
 * @details This function provides the point-of-sale interface for:
 * - Adding books to a shopping cart
 * - Calculating totals with tax
 * - Generating receipts
 * - Updating inventory quantities
 * 
 * The function handles multiple purchases per transaction and maintains
 * real-time inventory tracking. It includes validation for:
 * - Book availability
 * - Quantity limits
 * - Proper numeric input
 */
int cashier(bookType array[], int bookCount);

#endif
