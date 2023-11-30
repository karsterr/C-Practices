/* 
 * File:   main.c
 * Author: tkiziloren
 *
 * Created on 25 Ağustos 2012 Cumartesi, 20:31
 */

#include <stdio.h> 

int main(int argc, const char * argv[]) {
    int sayi1 = 5;
    int sayi2 = 5;
    // Önce bir artır, sonra atama yap
    int iOnceArtirSonuc = ++sayi1;
    // Önce atama yap, sonra bir artır
    int iSonraArtirSonuc = sayi2++;

    printf("sayi1=%d\n", sayi1);
    printf("sayi2=%d\n", sayi2);

    printf("iOnceArtirSonuc=%d\n", iOnceArtirSonuc);
    printf("iSonraArtirSonuc=%d\n", iSonraArtirSonuc);

    printf("------------------------\n");

    //Önce bir eksilt, sonra atama yap
    int iOnceEksiltSonuc = --sayi1;
    //Önce atama yap, sonra bir eksilt 
    int iSonraEksiltSonuc = sayi2--;

    printf("sayi1=%d\n", sayi1);
    printf("sayi2=%d\n", sayi2);

    printf("iOnceEksiltSonuc=%d\n", iOnceEksiltSonuc);
    printf("iSonraEksiltSonuc=%d\n", iSonraEksiltSonuc);
    return 0;
}
