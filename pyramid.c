#include <stdio.h>

void printPyramid(int n) {
    int i, j, space;

    for(i = 1; i <= n; i++) {
        // Printing spaces
        for(space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // Printing stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int n;

    // Asking the user for the height of the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Print the pyramid
    printPyramid(n);

    return 0;
}
