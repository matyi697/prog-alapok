/*
Írj egy programot, amely két számot kér be a felhasználótól:
egy kezdőértéket és egy végértéket,
amelyek egy intervallumot határoznak meg. A program feladata,
hogy az intervallumon belül megkeresse az összes olyan (x,y)(x,y) számpárt,
amelyre teljesül az alábbi egyenlet:
x^2−y=0

Azaz, keresse meg azokat a számpárokat, ahol x a négyzeten - y egyenlő 0-val.
pl:
INPUT: 1 10                 | Magyarázat:
       (1, 1)               | 1^2 - 1 = 0 
       (2, 4)               | 2^2 - 4 = 0
       (3, 9)               | 3^2 - 9 = 0
       
Kis segítség: menj végig a programmal az összes számon két ciklussal és úgy keresd a párokat.
*/

#include <stdio.h>

int main () {
    int i1 = 0;
    int i2 = 0;
    scanf("%d %d", &i1, &i2);
    for (int x = i1; x <= i2; x++)
        for(int y = i1; y <= i2; y++) 
            if ((x*x)-y == 0) 
                printf("(%d, %d)\n", x, y);
    return 0;
}