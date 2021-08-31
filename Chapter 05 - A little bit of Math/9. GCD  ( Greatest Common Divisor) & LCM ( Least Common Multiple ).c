#include <stdio.h>

int main () {
    int a, b;
    printf("Enter 2 numbers to get GCD and LCM: ");
    scanf("%d%d", &a, &b);
    a = abs_val(a);
    b = abs_val(b);
    int multiply = a * b;

    while(1) {
        if (a == b) {
            printf("GCD: %d\n", a);
            break;
        } else if (a < b) {
            b = b - a; // As Euclid's Algorithm
        } else {
            a = a - b;
        }
    }

    printf("LCM: %d", multiply / a);

    return 0;
}


int abs_val(int y) {
    if(y<0) {
        return(y*-1);
    } else {
        return(y);
    }
}
