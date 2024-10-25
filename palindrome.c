/*
 * palindrome.c
 * Course: [CSCE 3600.003 (8175)]
 * Date: [10/24/2024]
 * Authors: [Syeda Zainab]
 *
 * Description: This file contains the implementation of the is_palindrome function,
 * which checks if a number's binary representation is a palindrome using bitwise operators.
 */

#include "major1.h"
#include <stdio.h>

// Function to print the binary representation of a number
void print_binary(int n) {
    // Iterate through each bit position from most significant to least
    for (int i = 31; i >= 0; i--) {
        // Mask the bit and print 1 or 0
        printf("%d", (n >> i) & 1);
        // Optional: Add a space every 8 bits for readability
        if (i % 8 == 0) printf(" ");
    }
    printf("\n");
}

// Function to check if a number's binary representation is a palindrome
int is_palindrome(int n) {
    // Compare bits from the start and end towards the center
    for (int i = 0; i < 16; i++) {
        int left_bit = (n >> (31 - i)) & 1;  // Left bit
        int right_bit = (n >> i) & 1;        // Right bit
        if (left_bit != right_bit) {
            return 0;  // Not a palindrome
        }
    }
    return 1;  // Is a palindrome
}
