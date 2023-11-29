#include <stdio.h>
#define PI 3.14

int main(){
    int r;
    float circumference;

    printf("Radius of circle:");
    scanf("%d", &r);

    circumference = PI * r * 2;
    printf("\nCircumference : %.2f", circumference);
    return 0;
}