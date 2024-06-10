#include <stdio.h>
#include <stdlib.h>
#include <math.h>


typedef struct {
    double x;
    double y;
} Tacka;


double Rastojanje(Tacka a, Tacka b) {
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}


double Obim(Tacka* tacke, int n) {
    double obim = 0.0;
    for (int i = 0; i < n; i++) {
        obim += Rastojanje(tacke[i], tacke[(i + 1) % n]);
    }
    return obim;
}


double Povrsina(Tacka* tacke, int n) {
    double povrsina = 0.0;
    for (int i = 0; i < n; i++) {
        povrsina += tacke[i].x * tacke[(i + 1) % n].y - tacke[(i + 1) % n].x * tacke[i].y;
    }
    return fabs(povrsina) / 2.0;
}

int main() {
    int n;
    printf("Unesite broj temena poligona: ");
    scanf("%d", &n);

    Tacka* tacke = (Tacka*)malloc(n * sizeof(Tacka));
    if (tacke == NULL) {
        printf("Greska pri alokaciji memorije!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Unesite koordinate tacke %d (x y): ", i + 1);
        scanf("%lf %lf", &tacke[i].x, &tacke[i].y);
    }

    double obim = Obim(tacke, n);
    double povrsina = Povrsina(tacke, n);

    printf("Obim poligona: %.2lf\n", obim);
    printf("Povrsina poligona: %.2lf\n", povrsina);

    free(tacke);
    return 0;
}
