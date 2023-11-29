#include <stdio.h>

int main(int argc, const char * argv[]) {
    const int constVar = 10000;
    // constVar = 125; // Error : Const values cant be changes
    printf("%d\n", constVar);
    return 0;
}
