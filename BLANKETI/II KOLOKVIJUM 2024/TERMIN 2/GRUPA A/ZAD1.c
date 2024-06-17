#include <stdio.h>

void printMatrix(int matrix[15][15], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j != 0) {
				printf(" | ");
			}
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
}

int main() {

	int i, j, pom = -1, a[30], b[15][15], n, k, l, p;

	FILE* file = fopen("matrica.txt", "r");

	if (file == NULL) {
		printf("Greska pri otvaranju fajla.\n");
		return 1;
	}

	fscanf(file, "%d", &n);
	printf("\n");

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			fscanf(file, "%d", &b[i][j]);
		}
	}
	fclose(file);

	k = 0;
	for (j = 0; j < n; j++) {
		a[k] = b[0][j];
		k++;
	}
	p = k;
	for (i = n - 1, j = 0; i > 0 && j < n - 1; i--, j++) {
		a[p] = b[i][j];
		p++;
	}
	l = p;
	for (j = 1; j < n; j++) {
		a[l] = b[n - 1][j];
		l++;
	}

	// Sortiramo niz a u opadajucem redosledu
	for (int i = 0; i < l - 1; i++) {
		for (int j = 0; j < l - i - 1; j++) {
			if (a[j] < a[j + 1]) {
				int temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}

	// Vracamo sortirane elemente nazad u matricu b
	k = 0;
	for (j = 0; j < n; j++) {
		b[0][j] = a[k];
		k++;
	}
	p = k;
	for (i = n - 1, j = 0; i > 0 && j < n - 1; i--, j++) {
		b[i][j] = a[l - p];
		p++;
	}
	l = p;
	for (j = 1; j < n; j++) {
		b[n - 1][j] = a[l];
		l++;
	}


	printMatrix(b, n);

	return 0;
}
