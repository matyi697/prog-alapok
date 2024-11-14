/*
01)
A program bekér két adatot a felhasználótól: az első egy karakter, a második egy szám.
A program rajzoljon egy piramist, amelynek az alapja akkora, mint a beolvasott szám, 
és olyan karakterekből áll, mint az elsőként megadott karakter. Például:

INPUT: o 4               INPUT:# 3    
       o                       #
       oo                      ##
       ooo                     ###
       oooo                     
       
*/

#include <stdio.h>

int main () {
    char ch;                                //  mit
    int times = 0;                          //  hányszor
    scanf("%c %d", &ch, &times);            //  beolvassuk az adatat
    for (int i = 1; i <= times; i++) {      //  haladunk lefele amig nem erjuk el a times-t
        for (int m = 0; m < i; m++) {       //  minden sorban eggyel tobb karaktert irunk ki 
            printf("%c", ch);               //  kiirjuk a karaktert
        }  
        printf("\n");                       //  minden sor vegen uj sort kezdunk
    }
    return 0;
}