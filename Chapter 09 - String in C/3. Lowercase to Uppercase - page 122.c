#include <stdio.h>
/*
Things to keep in mind:
    1. The value of 'A' is 65,
       The value of 'B' is 67,
       The value of 'C' is 68 and so on...

    2. The value of 'a' is 97,
       The value of 'b' is 98,
       The value of 'c' is 99 and so on...

*/

void to_upper_case (char ara[], int length) {

    for( int i = 0; i < length; i++) {
        if ( ara[i] >= 'a' && ara[i] <= 'z' ) {
            ara[i] = 'A' + (ara[i] - 'a');
        }
    }
}

int main() {
    char name[] = { 'n', 'i', 's', 'a', 'r', 'u', 'l', '\0'};
    int name_length = 7;

    to_upper_case(name, name_length);
    printf("%s", name);

    return 0;
}
