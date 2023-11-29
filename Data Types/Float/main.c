#include <stdio.h>
int main() {
    float pi = 3.14159265358979323846;
    float floatVar = 2.71;

    printf("PI value: %f\n", pi);
    printf("PI value: %.2f \n", pi);
    printf("PI value: %.10f \n", pi);

    printf("Float variable value: %f \n", floatVar);
    printf("Float variable value: %.15f \n", floatVar);

    return 0;
}