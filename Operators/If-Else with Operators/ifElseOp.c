/* 
 * File:   main.c
 * Author: tkiziloren
 *
 * Created on 25 Ağustos 2012 Cumartesi, 21:06
 */

#include <stdio.h>

int main(int argc, char** argv) {

    int x = 11, y = 5, z = 0, z1 = 0;

    /* x degeri y'den buyukse z'nin değeri x olsun
       aksi takdirde y olsun */
    z = x > y ? x : y;
    
    /* x degeri y'den kucukse z'nin değeri x olsun
       aksi takdirde y olsun */   
    z1 = x < y ? x : y;

    printf("z  : %d\n", z);
    printf("z1 : %d\n", z1); 

    return 0;
}

