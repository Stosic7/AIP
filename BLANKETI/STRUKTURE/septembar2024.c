#include <stdio.h>
#include 

typedef struct {
    int a;
    int b;
    int c;
    int d;
} Cetvorougao;

int Romb(Cetvorougao c) {
    if (c.a == c.b && c.b == c.c && c.c == c.d) {
        return 1;
    }
    return 0;
}

int Paralelogram(Cetvorougao c) {
    if (c.a == c.b && c.c == c.d) {
        return 1;
    }
    return 0;
}

int Obim(Cetvorougao c) {
    return c.a + c.b + c.c + c.d;
}

int main() {
    int brojCetvorouglova;
    scanf("%d", &brojCetvorouglova);

    Cetvorougao *nizCetvorouglova = (Cetvorougao*)malloc(brojCetvorouglova * sizeof(Cetvorougao));

    for (int i = 0; i < brojCetvorouglova; i++) {
        scanf("%d %d %d %d", &nizCetvorouglova[i].a, &nizCetvorouglova[i].b, &nizCetvorouglova[i].c, &nizCetvorouglova[i].d);
    }

    int sumaObimaRombova = 0;
    int sumaObimaParalelograma = 0;

    for (int i = 0; i < brojCetvorouglova; i++) {
        if (Romb(nizCetvorouglova[i])) {
            sumaObimaRombova += Obim(nizCetvorouglova[i]);
        } else if (Paralelogram(nizCetvorouglova[i])) {
            sumaObimaParalelograma += Obim(nizCetvorouglova[i]);
        }
    }

    int razlikaObima = sumaObimaRombova - sumaObimaParalelograma;
    if (razlikaObima < 0) {
        razlikaObima = -razlikaObima;
    }

    printf("%d\n", razlikaObima);

    free(nizCetvorouglova);

    return 0;
}
