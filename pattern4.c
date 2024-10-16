#include <stdio.h>
#include <stdbool.h>

bool print_diamond(int rows) {
    // Check if the number of rows is even
    if (rows % 2 == 0) {
        printf("Error: The number of rows must be odd.\n");
        return false;
    }

    int mid = rows / 2; // Calculate the middle point

    // Print the upper half of the diamond
    for (int i = 0; i <= mid; i++) {
        for (int j = 0; j < mid - i; j++) {
            printf(" "); // Print spaces
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*"); // Print stars
        }
        printf("\n");
    }

    // Print the lower half of the diamond
    for (int i = mid - 1; i >= 0; i--) {
        for (int j = 0; j < mid - i; j++) {
            printf(" "); // Print spaces
        }
        for (int k = 0; k < (2 * i + 1); k++) {
            printf("*"); // Print stars
        }
        printf("\n");
    }

    return true;
}

int main() {
    int rows;

    // Input number of rows
    printf("Enter an odd number of rows: ");
    scanf("%d", &rows);

    // Print the diamond pattern
    if (print_diamond(rows)) {
        printf("Diamond pattern printed successfully.\n");
    }

    return 0;
}

