#include <stdio.h>
#include <stdlib.h>
#define p 5
#define q 2
void main() {
	int n, i, brojVecihOdPolovine = 0, suma = 0;
	int niz[10];
	float prosek;

	FILE* ulaz = fopen("ulazni_niz.txt", "r");
	if (ulaz == NULL) {
		printf("Greska pri otvaranju datoteke 'ulazni_niz.txt'.\n");
	}
	fscanf(ulaz, "%d", &n);
	for (i = 0; i < n; i++) {
		fscanf(ulaz, "%d", &niz[i]);
		suma += niz[i];
	}
	fclose(ulaz);
	prosek = suma / n;
	for (i = 0; i < n; i++) {
		if (niz[i] > prosek / 2) {
			brojVecihOdPolovine++;
		}
	}
	FILE* izlaz = fopen("izlaz.txt", "w");
	if (izlaz == NULL) {
		printf("Greska pri otvaranju datoteke 'izlaz.txt'.\n");
	}
	fprintf(izlaz, "%d", brojVecihOdPolovine);
	fclose(izlaz);
	for (i = 0; i < n; i++) {
		if (niz[i] % 2 == 0)
			niz[i] += p;
		else
			niz[i] -= q;
	}
	printf("Niz nakon transformacije: ");
	for (i = 0; i < n; i++) {
		printf("%d ", niz[i]);
	}
	printf("\n");
}
