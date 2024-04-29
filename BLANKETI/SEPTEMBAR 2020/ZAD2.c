#include <stdio.h>
void main()
{
	int broj_bacanja, i, prvi[100], drugi[100], rez = 0;
	printf("Unesite ukupan broj bacanja");
	scanf("%d", &broj_bacanja);
	printf("Unesite vrednosti koji je dobio prvi igrač");
	for (i = 0; i < broj_bacanja; i++)
		scanf("%d", &prvi[i]);
	printf("Unesite vrednosti koji je dobio drugi igrač");
	for (i = 0; i < broj_bacanja; i++)
		scanf("%d", &drugi[i]);
	for (i = 0; i < broj_bacanja; i++)
		if (prvi[i] > drugi[i])
			rez++;
		else if (prvi[i] < drugi[i])
			rez--;
	if (rez > 0)
		printf("Pobednik je prvi igrač");
	else if (rez < 0)
		printf("Pobednik je drugi igrač");
	else
		printf("Rezultat je nerešen");
}
