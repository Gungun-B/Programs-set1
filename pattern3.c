#include <stdio.h>

void print_half_diamond(int columns) {
    // Print the upper half of the diamond
    for (int i = 1; i <= columns; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    // Print the lower half of the diamond
    for (int i = columns - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int columns;

    // Input number of columns
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Print the half diamond pattern
    print_half_diamond(columns);

    return 0;
}
