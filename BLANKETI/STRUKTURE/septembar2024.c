#include <stdio.h>
#include <stdlib.h>

typedef struct{
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
    if (c.a == c.c && c.b == c.d) {
        return 1;
    }
    return 0;
}

int Obim(Cetvorougao c) {
    return c.a + c.b + c.c + c.d;
}

int main() {
    int brojCetvorouglova;
    printf("Unesite broj tacaka: ");
    scanf("%d", &brojCetvorouglova);

    Cetvorougao *nizCetvorouglova = (Cetvorougao*)malloc(brojCetvorouglova * sizeof(Cetvorougao));

    for (int i = 0; i < brojCetvorouglova; i++) {
        printf("Unesi tacke za cetvorougao #%d\n", i+1);
        scanf("%d %d %d %d", &nizCetvorouglova[i].a, &nizCetvorouglova[i].b, &nizCetvorouglova[i].c, &nizCetvorouglova[i].d);
    }

    int sumaObimaRombova = 0;
    int sumaObimaParalelograma = 0;

    for (int i = 0; i < brojCetvorouglova; i++) {
        if (Romb(nizCetvorouglova[i])) {
            printf("Cetvorougao %d je romb\n", i+1);
            sumaObimaRombova += Obim(nizCetvorouglova[i]);
        } else if (Paralelogram(nizCetvorouglova[i])) {
            printf("Cetvorougao %d je paralelogram\n", i+1);
            sumaObimaParalelograma += Obim(nizCetvorouglova[i]);
        }
    }

    int razlikaObima = sumaObimaRombova - sumaObimaParalelograma;
    if (razlikaObima < 0) {
        razlikaObima = -razlikaObima;
    }

    printf("Razlika obima: %d\n", razlikaObima);

    free(nizCetvorouglova);

    return 0;
}
