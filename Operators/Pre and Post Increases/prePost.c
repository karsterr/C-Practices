#include <stdio.h>

int main() {
    int x = 5;
    int pre = ++x;
    int post = x++;

    printf("x = %d\n", x);
    printf("Pre Increasement = %d\n", pre);
    printf("Post Increasement = %d\n", post);

    printf("------------------------\n");

    x = 5;
    pre  = --x;
    post = x--;

    printf("x = %d\n", x);
    printf("Pre Decreasement = %d\n", pre);
    printf("Post Increasement = %d\n", post);
    return 0;
}
