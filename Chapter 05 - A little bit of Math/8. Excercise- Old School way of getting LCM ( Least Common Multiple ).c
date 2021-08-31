#include <stdio.h>

// Declaration of enum
typedef enum { F, T } boolean;

int main () {
    int a, b, LCM = 1;
    boolean jay = F;

    printf("Enter 2 numbers to get LCM: ");
    scanf("%d %d", &a, &b);

    a = abs_val(a);
    b = abs_val(b);
    if( a % b == 0) {
        printf("\nLCM: %d", a);
    } else if ( b % a == 0 ) {
         printf("\nLCM: %d", b);
    } else {
        int i = 2;
        while ( i <= a || i <= b ) {
            if( a % i == 0) {
                a = a / i;
                jay = T;
            }
            if( b % i == 0) {
                b = b / i;
                jay = T;
            }
            if ( jay == T ) {
                LCM = LCM * i;
            }
            if( jay == F ) {
               i++;
            }
            jay = F;
        }
        printf("\nLCM: %d", LCM);
    }

    return 0;
}


int abs_val(int y) {
    if(y<0) {
        return(y*-1);
    } else {
        return(y);
    }
}
