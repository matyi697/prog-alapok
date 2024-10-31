#include <stdio.h>
#include <string.h>

int main() {
    FILE* szoveg = fopen("szoveg.txt", "r"); // Olvasás mód
    if (szoveg == NULL) {                    
        printf("Hiba a fájl megnyitásakor.\n");
        return 1;
    }

    int hany_szereplo = 0;
    char szereplok[100][100];  // 100 szereplő, mindegyik max 99 karakter hosszú
    char sor[100];

    while (fgets(sor, sizeof(sor), szoveg)) {
        int kettospont = -1;
        
        // Keressük meg a kettőspontot
        for (int i = 0; i < sizeof(sor); i++) {
            if (sor[i] == ':') {
                kettospont = i;
                break;
            }
        }
        if (kettospont == -1) {
            continue;  // Ha nincs kettőspont, ugorjuk át a sort
        }

        // Szereplő nevének másolása
        char uj_szereplo[100];
        for (int i = 0; i < kettospont; i++) {
            uj_szereplo[i] = sor[i];
        }
        uj_szereplo[kettospont] = '\0'; 

        // Ellenőrizzük, hogy a szereplő már benne van-e a listában
        int van = 0;
        for (int i = 0; i < hany_szereplo; i++) {
            if (strcmp(uj_szereplo, szereplok[i]) == 0) {
                van = 1;
                break;
            }
        }

        // Ha új szereplő, hozzáadjuk a listához
        if (van == 0) {
            for(int i = 0; uj_szereplo[i] != '\0'; i++) {
                szereplok[hany_szereplo][i] = uj_szereplo[i];
            }
            szereplok[hany_szereplo][sizeof(szereplok[hany_szereplo]) - 1] = '\0';
            hany_szereplo++;
        }
    }

    fclose(szoveg);

    // Szereplők kiírása
    printf("Szereplők:\n");
    for (int i = 0; i < hany_szereplo; i++) {
        printf("%s\n", szereplok[i]);
    }

    return 0;
}
