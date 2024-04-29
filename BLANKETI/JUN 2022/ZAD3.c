#include<stdio.h>
#include<string.h>
void BrisanjeIZamena(char* s, char c)
{
	int i = 0, pocetak, j, del;
	char pon;
	while (s[i] != '\0')
	{
		i++;
		if (s[i] == s[i - 1])
		{
			pocetak = i - 1;
			pon = s[i];
			while (s[i] == pon && s[i] != '\0')
				i++;
			del = i - pocetak - 1;
			s[pocetak] = c;
			j = i;
			while (s[j] != '\0')
			{
				s[j - del] = s[j];
				j++;
			}
			s[j - del] = s[j];
			i = pocetak + 1;
		}
	}
}
void main()
{
	char s[50][80];
	int i, N;
	scanf("%d", &N);
	getchar();
	for (i = 0; i < N; i++)
	{
		gets(s[i]);
	}
	for (i = 0; i < N; i++)
	{
		BrisanjeIZamena(s[i], s[i][strlen(s[i]) - 1]);
		puts(s[i]);
	}
}
