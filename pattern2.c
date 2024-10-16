#include <stdio.h>

void print_right_triangle(int rows) {
    for (int i = 1; i <= rows; i++) {
        // Print stars for the current row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after printing one row
        printf("\n");
    }
}

int main() {
    int rows;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the right triangle pattern
    print_right_triangle(rows);

    return 0;
}
