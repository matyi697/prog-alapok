/*
A program kap egy számot a felhasználótól, és megvizsgálja, hogy négyzetszám-e.

(A négyzetszám olyan szám, amelyet fel tudunk írni úgy, hogy egy szám négyzetre van emelve,
például: 4 = 2^2, azaz kettő a négyzeten = 4.)

Egy kis segítség: ha egy szám négyzetszám, akkor a gyöke egész szám lesz; ha a gyöke nem egész szám, akkor nem négyzetszám.
pl: √4 = 2 -> négyzetszám, √7 = 2.645 ->nem négyzetszám
*/

#include <stdio.h>
#include <math.h>   //a gyokvonas es a kerekites miatt kell 

int main () {
    int n = 0;
    scanf("%d", &n);    //beolvassuk a szamot
    if (sqrt(n) - round(sqrt(n)) == 0)  //ha a kerekitett ereteket levonom egy egesz szambol es az eredmeny 0 akkor tudom hogy az eredeti szam is egesz volt
        printf("Negyzetszam!\n");
    else
        printf("Nem negyzetszam!\n");
    return 0;
}