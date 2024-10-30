#include "major1.h"

void displayMenu(){
    printf("Enter the menu option for the operation to perform:\n");
    printf("(1) POWER OF 2\n");
    printf("(2) REVERSE BITS\n");
    printf("(3) REPLACE BIT POSITION FROM MASK\n");
    printf("(4) PALINDROME\n");
    printf("(5) EXIT\n");
}

int main() {
    int choice, num;

    while (1) {
        displayMenu();
        printf("--> ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Program terminating. Goodbye.\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Error: Invalid option. Please try again.\n");
            continue;
        }

        printf("Enter a positive integer less than 2 billion: ");
        scanf("%d", &num);

        while (num <= 0 || num >= 2000000000) {
            printf("Enter a positive integer less than 2 billion: ");
            scanf("%d", &num);
        }

        switch (choice) {
            case 1:
                powerOfTwo(num);
                break;
            case 2:
                reverseBits(num);
                break;
            case 3:
                replaceBit(num);
                break;
            case 4:
                checkPalindrome(num);
                break;
        }
    }

    return 0;
}
