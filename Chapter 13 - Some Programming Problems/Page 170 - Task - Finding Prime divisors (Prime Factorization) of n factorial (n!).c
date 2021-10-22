#include <stdio.h>

int arr[100];

int main() {

    int i, n, n_cpy, num;
    scanf("%d", &n); // Ex. The Input: 6

    for ( n_cpy = n; n_cpy > 1; n_cpy-- )  {
        // Finding Prime divisors of n_cpy
        num = n_cpy;
        i = 2;
        while(i <= n_cpy) {
             if ( num % i == 0 ) {
                // Counting number of prime numbers in array
                arr[i] = arr[i] + 1;

                num = num / i;
                continue;
            }
            i++;
        }
    }

    // Itarating
    printf("%d! = ", n);
    for ( i = 0; i <= 100; i++ )  {
        if( arr[i] > 0) {
            printf("(%d^%d) ", i, arr[i]);
        }
    }        // The Output: 6! = (2^4) (3^2) (5^1)
    printf("\n", n);


    return 0;

}
