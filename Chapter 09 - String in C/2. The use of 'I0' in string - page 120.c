#include <stdio.h>

int main() {
    // We use \0 to tell the compiler that it is the end of the string.
    char country[] = { 'B', 'a', 'n', 'g', 'l', 'a', '\0', 'd', 'e', 's', 'h'};
    printf("%s\n", country);
    return 0;
}
