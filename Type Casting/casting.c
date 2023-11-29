#include <stdio.h>

int main() {
    float a = 7 / 3;
    float b = (float) (7 / 3);
    float c = 7 / (float) 3;
    float d = (float) 7 / 3;
    float e = (float) 7 / (float) 3;

    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f\n", c);
    printf("%f\n", d);
    printf("%f\n", e);

    double d1 = 5.3;
    double d2 = 5.4;
    double d3 = 5.5;

    int sum1 = (int) (d1 + d2 + d3);
    int sum2 = (int) d1 + (int) d2 + (int) d3;

    printf("%d\n", sum1);
    printf("%d\n", sum2);
}
