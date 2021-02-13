#include <stdio.h>

int main() {
    // Method 1
    char country1 [11] = { 'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    printf("%s\n", country1);

    // Method 2
    char country2 [ ] = { 'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0'};
    printf("%s\n", country2);

    // Method 3
    char country3 [] = "Bangladesh";
    printf("%s\n", country3);

    // All above methods are "Array Methods" of declaring a String in C

    // Method 4 [Pointer Method]
    char *country4 = "Bangladesh";
    printf("%s\n", country4);
    return 0;
}
