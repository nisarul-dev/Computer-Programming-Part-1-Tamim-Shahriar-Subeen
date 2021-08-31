#include <stdio.h>

int main() {
    int n, f, c;

    printf("Select a option from below\n1. Farenheit to Celsius\n2. Celsius to Farenhiet\n\n\t");
    scanf("%d", &n);

    while(1) {
        if (n == 1) {
            printf("\nEnter the value in Farenheit: ");
            scanf("%d", &f);
            c = ( f - 32 ) / 1.8;
            printf("\n%d deg Farenheit to Celsius is '%d deg'", f, c);
            break;
        } else if(n == 2) {
            printf("\nEnter the value in Celsius: ");
            scanf("%d", &c);
            f = 1.8 * c + 32;
            printf("\n%d deg Celsius to Farenheit is '%d deg'", c, f);
            break;
        } else {
            printf("\nYou have entered wrong key.\nPlease Press '1' or '2' to select an option\n\n\t");
            scanf("%d", &n);
        }
    }

    return 0;
}
