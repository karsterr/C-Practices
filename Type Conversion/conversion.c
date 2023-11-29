#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE  50

int main(int argc, const char * argv[]) {
    char txt[SIZE];

    char* numStr1 = "256";
    char* numStr2 = "558";
    char* numStr3 = "179.25";
    char* numStr4 = "247.32";

    int num1 = atoi(numStr1);
    int num2 = atoi(numStr2);
    int sum1 = num1 + num2;
    printf("Sum 1 -> %d\n", sum1);

    float num3 = atof(numStr3);
    float num4 = atof(numStr4);
    float sum2 = num3 + num4;
    printf("Sum 2 -> %.2f\n", sum2);

    printf("Enter a character series:");
    gets(txt);

    printf("Number values from entered char series: ");

    int i;
    for (i = 0; i < SIZE; i++) {
        if (txt[i] == '\0')
            break;

        if (isdigit(txt[i]) == 1) {
            printf("%c", txt[i]);
        }
    }

    printf("\n");

    char lowerChar = 'b';
    char upperChar = 'T';


    printf("%c char in upper case: %c\n", lowerChar, toupper(lowerChar));
    printf("%c char in lower case: %c\n", upperChar, tolower(upperChar));


    return 0;
}


