#include <stdio.h>

int main() {
    int x_pls_y = 15, x_min_y = 5, x, y;

    // Getting the input from user:
    printf("x + y = ");
    scanf("%d", &x_pls_y); // Example: x + y = 15

    printf("x - y = ");
    scanf("%d", &x_min_y); // Example: x - y = 5

    // Equations
    x = (x_pls_y + x_min_y) / 2;
    y = (x_pls_y - x_min_y) / 2;

    // Output
    printf("\nx = %d \ny = %d\n", x, y); // Example: x = 10, y = 5

    return 0;
}
