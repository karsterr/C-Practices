#include <stdio.h>
#include "extern.h"

extern int x;
extern int y;

int main() {
    printf("x:%d, y:%d", x, y);
    return 0;
}