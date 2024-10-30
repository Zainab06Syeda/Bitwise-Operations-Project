#include "major1.h"  // Replace with the actual header file name


// Function to check if a number is a power of two
int powerOfTwo(int num) {
    if (num < 1 || num >= 2000000000) {
        return -1; // Error case for values outside the specified range
    }

    // Check if num is a power of two using bitwise AND
    if ((num & (num - 1)) == 0) {
        return num; // It's already a power of two
    }

    // If num is not a power of two, find the next power of two
    int nextPower = 1;
    while (nextPower <= num) {
        nextPower <<= 1; // Left shift to double the value
    }

    return nextPower;
}
