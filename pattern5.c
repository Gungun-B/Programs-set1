#include <stdio.h>

void print_pattern(int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            // Print numbers in ascending order for even indexed rows
            for (int j = 1; j <= columns; j++) {
                printf("%d", j);
            }
        } else {
            // Print numbers in descending order for odd indexed rows
            for (int j = columns; j >= 1; j--) {
                printf("%d", j);
            }
        }
        // Move to the next line after printing one row
        printf("\n");
    }
}

int main() {
    int rows, columns;

    // Input number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    // Print the pattern
    print_pattern(rows, columns);

    return 0;
}
