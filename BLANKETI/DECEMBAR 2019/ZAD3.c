#include <stdio.h>
void main()
{
	char tekst[500];
	int vokali = 0, slova = 0, razmaci = 0, i;
	printf("Unesite tekst.\n");
	gets(tekst);
	while (tekst[slova] != '\0')
	{
		switch (tekst[slova])
		{
		case ' ':
		case '\t':
		case '\n':
		case '\v':
		case '\f':
		case '\r':
			razmaci++;
			break;
		}
		slova++;
	}
	for (i = 0; i < slova; i++)
	{
		switch (tekst[i])
		{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			vokali++;
			break;
		}
	}
	printf("Procenat vokala je %.2f%% (%i/%i).\n", ((float)vokali / (slova - razmaci)) *
		100, vokali, slova - razmaci);
}
