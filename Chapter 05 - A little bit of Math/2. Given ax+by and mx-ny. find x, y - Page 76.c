#include <stdio.h>

int main() {
    int a1, b1, c1, a2, b2, c2, x, y;

    // Example:
    // 4x + 5y = 14
    // 5x + 6y = 17

    // Getting the input from user:
    printf("Let,\na1x + b1y = c1\na2x + b2y = c2\n\na1 = ");
    scanf("%d", &a1); // 4
    printf("\nb1 = ");
    scanf("%d", &b1); // 5
    printf("\nc1 = ");
    scanf("%d", &c1); // 14
    printf("\na2 = ");
    scanf("%d", &a2); // 5
    printf("\nb2 = ");
    scanf("%d", &b2); // 6
    printf("\nc2 = ");
    scanf("%d", &c2); // 17

    // Equations
    x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);

    // Output
    printf("\nx = %d \ny = %d\n", x, y); // Example: x = 1, y = 2
    return 0;
}
