#include <stdio.h>

int main(int argc, const char * argv[]) {
    register int x = 4;
    // int *pointer = &x; // Error : cant access variables value with &

    // printf("%d\n", *pointer); // Error : address of register variable x requested
    return 0;
}
