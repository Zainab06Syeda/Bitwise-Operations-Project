#include "major1.h"

void replaceBit(int num) {
    int mask, pos;
    printf("Enter a positive integer mask up to 3 billion: ");
    scanf("%d", &mask);
    while (mask <= 0 || mask >= 3000000000) {
        printf("Enter a positive integer mask up to 3 billion: ");
        scanf("%d", &mask);
    }

    printf("Enter the bit replacement position from mask (0-indexed): ");
    scanf("%d", &pos);
    while (pos < 0 || pos > 31) {
        printf("Enter the bit replacement position from mask (0-indexed): ");
        scanf("%d", &pos);
    }

    int bit = (mask >> pos) & 1;
    num = (num & ~(1 << pos)) | (bit << pos);
    printf("New integer with bit %d from mask %d is %d\n", pos, mask, num);
}
