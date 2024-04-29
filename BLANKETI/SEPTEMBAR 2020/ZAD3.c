#include<stdio.h>
#include<string.h>
void rotiraj(char niz[], int k)
{
	int i, j, pom;
	int n = strlen(niz);
	for (i = 0; i < k; i++) {
		pom = niz[n - 1];
		for (j = n - 1; j > 0; j--) {
			niz[j] = niz[j - 1];
		}
		niz[0] = pom;
	}
}
int main()
{
	char prvi[100], drugi[100], pom[100];
	int i, n;
	int broj_rotiranja;
	gets(prvi);
	gets(drugi);
	broj_rotiranja = -1;
	strcpy(pom, prvi);
	if (strlen(prvi) == strlen(drugi))
	{
		n = strlen(prvi);
		for (i = 0; i < n; i++) {
			strcpy(prvi, pom);
			rotiraj(prvi, i);
			if (strcmp(prvi, drugi) == 0)
			{
				broj_rotiranja = i;
			}
		}
	}
	printf("%d\n", broj_rotiranja);
	if (broj_rotiranja != -1) {
		if (broj_rotiranja < n / 2.0) {
			printf("%s", "desno");
		}
		else {
			printf("%s", "levo");
		}
	}
	return 0;
}
