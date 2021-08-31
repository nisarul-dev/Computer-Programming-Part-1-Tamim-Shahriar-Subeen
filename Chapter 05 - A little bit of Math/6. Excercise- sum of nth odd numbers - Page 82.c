#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Program:\nSummation of 1 to n'th Odd Numbers\n\nEnter the value of n: ");
    scanf("%d", &n);

    while( i <= n ) {
        sum = sum + i;
        i = i + 2;
    }

    printf("\nSummation of 1 to %d'th Odd Numbers is: %d\n", n, sum);
    return 0;
}
