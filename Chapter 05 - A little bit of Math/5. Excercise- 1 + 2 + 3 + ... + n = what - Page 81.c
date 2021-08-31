#include<stdio.h>

int main () {
    int n, sum;
    printf("1 + 2 + 3 + ... + n = ?\nn = ");
    scanf("%d", &n);
    sum = ( n * ( n + 1) ) / 2;
    printf("\n1 + 2 + 3 + ... + %d = %d\n", n, sum);
    return 0;
}
