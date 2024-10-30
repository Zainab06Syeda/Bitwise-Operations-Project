#include "major1.h"

void reverseBits(int num) {
    unsigned int reversed = 0;
    for (int i = 0; i < 32; i++) {
        if (num & (1 << i)) {
            reversed |= 1 << (31 - i);
        }
    }
    printf("%d with bits reversed is %u\n", num, reversed);
}
