#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct Trougao {
	int a;
	int b;
	int c;
} Trougao;
int JednakokrakiTrougao(Trougao t) {
	int jesteJednakokraki = 0;
	if (t.a == t.b || t.a == t.c || t.b == t.c)
		jesteJednakokraki = 1;
	return jesteJednakokraki;
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
	float pJednakokraki = 0.0, pSvi = 0.0, procenat, povrsina;
	Trougao* t;
	scanf("%d", &N);
	t = (Trougao*)malloc(N * sizeof(Trougao));
	if (t) {
		for (i = 0; i < N; i++)
			scanf("%d%d%d", &t[i].a, &t[i].b, &t[i].c);
		for (i = 0; i < N; i++) {
			if (Provera(t[i])) {
				povrsina = IzracunajPovrsinu(t[i]);
				pSvi += povrsina;
				if (JednakokrakiTrougao(t[i])) {
					pJednakokraki += povrsina;
				}
			}
		}
		if (pSvi != 0)
			printf("%.2f", (pJednakokraki / pSvi) * 100);
		else
			printf("%.2f", 0);
		free(t);
	}
}
