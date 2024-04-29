#include <stdio.h>
#include <unistd.h>

int main() {
	int velika, mala, inter, ostalo, i;
	char s[100];
	do
	{
		printf("Unesite recenicu: \n");
		gets(s);
		printf("Recenica uneta.\n");
		velika = 0;
		mala = 0;
		inter = 0;
		ostalo = 0;
		i = 0;
		while (s[i] != '\0')
		{
			if (s[i] >= 'A' && s[i] <= 'Z') velika++;
			else if (s[i] >= 'a' && s[i] <= 'z') mala++;
			else if (s[i] == '.' ||
				s[i] == ',' ||
				s[i] == '!' ||
				s[i] == '?' ||
				s[i] == ':' ||
				s[i] == ';') inter++;
			else ostalo++;
			i++;
		}
		printf("%d %d %d %d \n", velika, mala, inter, ostalo);
		sleep(2);
		printf("kraj\n");
	} while (velika <= mala);
}
