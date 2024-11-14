/*
A program bekér egy számot a felhasználótól, és az outputra egy üres négyzetet rajzol "o" betűkkel,
amely akkora, mint a megadott szám.
Például:
INPUT: 4                INPUT: 5
       oooo             ooooo
       o  o             o   o
       o  o             o   o
       oooo             o   o
                        ooooo
*/

#include <stdio.h>

int main () {
    int n = 0;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)     //elso sor kiirasa (full "o" betuk, n darab)
        printf("o");
    printf("\n");
    
    for (int i = 0; i < n-2; i++) {     //vegig megyunk az olyan sorokon ahol az elso es utolso karakter van csak
        printf("o");                    //elso karakter
        
        for (int m = 0; m < n-2; m++)   //a koztuk levo spacek
            printf(" ");
        
        printf("o\n");                  //sor vegen az utolso karakter es ujsorra ugrunk
    }
    
    for (int i = 0; i < n; i++)         //utolso sor kiirasa (full "o" betuk, n darab)
        printf("o");
    
    printf("\n");
    return 0;
}