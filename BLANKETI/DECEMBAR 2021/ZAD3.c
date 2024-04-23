#include <stdio.h>
#include <string.h>
void main()
{
	int i, j, k, l;
	char s[80], rec1[20], rec2[20], recPom[20];
	FILE* f;
	printf("Unesite recenicu:\n");
	gets(s);
	f = fopen("zamena.txt", "r");
	while (!feof(f))
	{
		fscanf(f, "%s%s", rec1, rec2);
		i = 0;
		while (s[i] != '\0')
		{
			if (s[i] == ' ')
				i++;
			j = 0;
			k = i;
			while (s[i] != ' ' && s[i] != '\0')
			{
				recPom[j++] = s[i++];
			}
			recPom[j] = '\0';
			if (!strcmp(recPom, rec1))
			{
				for (l = k; l < i; l++)
					s[l] = rec2[l - k];
			}
			else if (!strcmp(recPom, rec2))
			{
				for (l = k; l < i; l++)
					s[l] = rec1[l - k];
			}
		}
	}
	printf("Recenica nakon transformacije:%s\n", s);
	fclose(f);
}
