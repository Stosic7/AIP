/*Na programskom jeziku C napisati strukturni program koji izdvaja sve cifre unetog N-tocifrenog celog broja
i prikazuje ih. Napomena: Cifre prikazati u jednom redu počevši od cifre najmanje težine. Iza svake cifre nalazi se jedan
blanko znak.*/

#include <stdio.h>
void main()
{
	int broj, cifra;
	scanf("%d", &broj);
	while (broj > 0)
	{
		cifra = broj % 10;
		printf("%d ", cifra);
		broj = broj / 10;
	}
}
