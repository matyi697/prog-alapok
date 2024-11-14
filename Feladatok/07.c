/*
Monoton szakasz kiírása egy számsorozatból

Írj egy programot, amely egy sor számot kér be, és megkeresi az első olyan részt,
ahol a számok csak növekednek vagy csak csökkennek.
Amint ez a monoton szakasz megszakad, a program leáll, és kiírja az addig beolvasott számokat.

A program folyamatosan olvas be számokat a felhasználótól.
Az első két szám alapján eldönti, hogy a sorozat növekvő vagy csökkenő lesz-e.
Amíg a számok követik ezt a növekedési vagy csökkenési irányt, a program kiírja őket.
Amint egy szám megszakítja ezt a mintát (például egy növekvő sorozatban csökkenés történik), a program befejezi a kiírást.

Példa:
    INPUT: 1 3 5 7 6 8
    OUTPUT: 1 3 5 7

    INPUT: 10 8 6 7 4
    OUTPUT: 10 8 6

Példa magyarázat

    Az első példában a számok eleinte növekednek (1 3 5 7).
    Amikor egy csökkenő szám (6) jön, a program leáll, mert megtört a növekedés.
    A második példában az első két szám alapján csökkenő mintát követ (10 8 6).
    A program leáll, amikor egy növekvő számot talál (7), mert így a csökkenés megszakad.

Összefoglalás
Ez a program tehát az első egyirányú (vagy növekvő, vagy csökkenő)
szakaszt találja meg és írja ki, és leáll, amint a sorozat iránya változik.
*/