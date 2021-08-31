#include <stdio.h>

int main() {
    double v, t, s;

    printf("Velocity = ");
    scanf("%lf", &v);
    printf("Time = ");
    scanf("%lf", &t);
    s = v * 2 * t;

    printf("\nCovered Distance = %.2lf\n", s);

    return 0;
}
