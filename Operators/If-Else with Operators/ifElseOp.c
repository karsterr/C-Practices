#include <stdio.h>

int main() {
    int x = 11, y = 5, p = 0, q = 0;
    p = x > y ? x : y;
    q = x < y ? x : y;

    printf("z : %d\n", p);
    printf("q : %d\n", q);
    return 0;
}

