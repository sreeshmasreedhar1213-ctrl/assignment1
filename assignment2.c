#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the number of rows: ");
    scanf("%d", &a);

    for(b = 1; b <= a; b++) {
        // Print stars: 1, 3, 5, ...
        for(c = 1; c <= (2 * b - 1); c++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}