int obrisiString(char str[], char podStr[])
{
	int poz = -1, nadjen = 0, i, j, len = 0;
	i = 0;
	while (i <= strlen(str) - strlen(podStr) && !nadjen)
	{
		j = 0;
		while (j < strlen(podStr) && str[i + j] == podStr[j])
			j++;
		if (j == strlen(podStr))
		{
			nadjen = 1;
			poz = i;
		}
		i++;
	}
	i = 0;
	if (nadjen)
	{
		len = strlen(str) - strlen(podStr) - poz + 1;
		while (i < len)
		{
			str[poz + i] = str[poz + strlen(podStr) + i];
			i++;
		}
	}
	return poz;
}
int main()
{
	char str[200];
	char zaBrisanje[20];
	int poz, i;
	gets(str);
	scanf("%s", zaBrisanje);
	do
	{
		poz = obrisiString(str, zaBrisanje);
	} while (poz != -1);
	printf("%s", str);
	return 0;
}
