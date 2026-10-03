#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of lines: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int a = 1; // Number of stars in the first row

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int k = 1; k <= a; k++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
        a += 2; // Increase stars by 2 for the next row
    }

    return 0;
}
