/* 
 * File:   main.c
 * Author: tkiziloren
 *
 * Created on 25 Ağustos 2012 Cumartesi, 20:41
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //Mantıksal operatör kullanım örnekleri
    int a = 1, b = 2, c = 3;
    // && kullanımı örnek
    if ((a < b) && (a < c))
        printf("\n%d degeri %d ve %d'den kucuktur.", a, b, c);

    // || kullanımı örnek
    if ((a < b) || (a < c))
        printf("\n%d, %d'den kucuk veya %d, %d'den kucuktur.", a, b, a, c);

    // ! kullanımı örnek
    if (!(a < b))
        printf("\n%d degeri %d'den buyuk veya esittir.", a, b);

    // a ve b değişkenlerinin değerlerini eşitleyelim
    a = 5, b = 5;
    // ! kullanımı örnek
    if (!(a < b))
        printf("\n%d degeri %d'den buyuk veya esittir.", a, b);

    // xor kullanımı örnek
    if (a ^ b)
        printf("\n%d degeri %d'den farklidir.", a, b);

    // farklinin degili esit anlamina gelir
    if (!(a ^ b))
        printf("\n%d degeri %d degerine esittir.", a, b);

    if (a ^ c)
        printf("\n%d degeri %d'den farklidir.", a, c);



    return 0;
}

