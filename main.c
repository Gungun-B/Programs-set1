#include <stdio.h>

void print_parallelogram(int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        // Print spaces for the current row
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        // Print stars for the current row
        for (int k = 0; k < columns; k++) {
            printf("*");
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

    // Print the parallelogram pattern
    print_parallelogram(rows, columns);

    return 0;
}
