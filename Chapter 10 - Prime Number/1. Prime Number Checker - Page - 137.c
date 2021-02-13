#include <stdio.h>

int is_prime( int n ) {
    if( n < 2 ) {
        return 0;
    }
    int i = 2;
    while( i < n ) {
        if( n % i == 0 ) {
            return 0;
        }
        i++;
    }
    return 1;
}

int main() {
    int num;
    printf("Enter a Number to check is it prime or not : ");
    scanf("%d", &num);

    if( is_prime(num) == 1 ) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
