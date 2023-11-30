#include <stdio.h>

int main() {
    int a = 1, b = 2, c = 3;

    if ((a < b) && (a < c))
        printf("\n%d is less than %d and %d.", a, b, c);

    if ((a < b) || (a < c))
        printf("\n%d is less than %d or %d is less than %d.", a, b, a, c);

    a = 5, b = 5;

    if (!(a < b))
        printf("\n%d is equal or greater than %d.", a, b);

    if (a ^ b)
        printf("\n%d and %d are different values.", a, b);

    if (!(a ^ b))
        printf("\n%d and %d are equal", a, b);

    if (a ^ c)
        printf("\n%d and %d are different values.", a, c);

    return 0;
}

