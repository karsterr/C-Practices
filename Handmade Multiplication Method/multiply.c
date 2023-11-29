#include <stdio.h>

int main(){
    int x, y, result;
    printf("Enter two integers : ");
    scanf("%d %d", &x, &y);

    result = multiply(x,y);
    printf("Multiplication Result : %d", result);
    return 0;
}

int multiply(int a, int b){
    int c;
    c = a * b;
    return c;
}