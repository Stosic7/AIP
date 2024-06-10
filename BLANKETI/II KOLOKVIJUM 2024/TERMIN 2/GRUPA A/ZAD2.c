#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct Trougao {
	int a;
	int b;
	int c;
} Trougao;
int PravougliTrougao(Trougao t) {
	int jestePravougli = 0;
	if (pow(t.a, 2) + pow(t.b, 2) == pow(t.c, 2)
		|| pow(t.a, 2) + pow(t.c, 2) == pow(t.b, 2)
		|| pow(t.b, 2) + pow(t.c, 2) == pow(t.a, 2))
		jestePravougli = 1;
	return jestePravougli;
}
int Provera(Trougao t) {
	int jesteTrougao = 0;
	if (t.a + t.b > t.c && t.a + t.c > t.b && t.b + t.c > t.a)
		jesteTrougao = 1;
	return jesteTrougao;
}
float IzracunajPovrsinu(Trougao t) {
	float S, povrsina = 0.0;
	if (Provera(t)) {
		S = (t.a + t.b + t.c) / 2.0;
		povrsina = sqrt(S * (S - t.a) * (S - t.b) * (S - t.c));
	}
	return povrsina;
}
void main() {
	int N, i;
	float pPravougli = 0.0, pOstali = 0.0;
	Trougao* t;
	scanf("%d", &N);
	t = (Trougao*)malloc(N * sizeof(Trougao));
	if (t) {
		for (i = 0; i < N; i++)
			scanf("%d%d%d", &t[i].a, &t[i].b, &t[i].c);
		for (i = 0; i < N; i++) {
			if (PravougliTrougao(t[i])) {
				pPravougli += IzracunajPovrsinu(t[i]);
			}
			else {
				pOstali += IzracunajPovrsinu(t[i]);
			}
		}
		if (pPravougli == pOstali) {
			printf("Povrsina je ista.");
		}
		else
		{
			printf("Povrsina nije ista.");
		}
		free(t);
	}
}
