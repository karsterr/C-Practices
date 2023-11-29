#include <stdio.h>

int main() {
    int x = 5, y = 10;
    int * restrict ptr1;
    int * restrict ptr2;

    ptr1 = &x;
    ptr2 = &y;

    printf("x = %d, y = %d\n", x, y);

    *ptr1 = *ptr1 + 2;
    *ptr2 = *ptr2 + 2;
    *ptr1 = *ptr1 + 10;

    printf("x = %d, y = %d\n", x, y);

}