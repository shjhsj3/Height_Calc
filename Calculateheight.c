#include <stdio.h>
int main() {
    int choice;
    float height;
    while (1) {
        printf("\nHeight Calculation System\n");
        printf("1. Start calculation\n");
        printf("0. Exit program\n");
        printf("Please enter your choice (1 or 0): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Please enter your current height (meters): ");
                scanf("%f", &height);
                printf("Your current height is: %.2f meters\n", height);
                break;
            case 0:
                printf("Thank you for using the Height Calculation System. Goodbye!\n");
                return 0;
            default:
                printf("Invalid input. Please re-enter 1 or 0.\n");
        }
    }
    return 0;
}
