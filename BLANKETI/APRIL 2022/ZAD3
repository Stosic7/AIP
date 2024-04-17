#include <stdio.h>
int main() {
	char rec[10], recenica[100];
	int i = 0, j = 0, duzinaRecenice = 0, duzinaReci = 0, poklapanje;
	FILE* fin = fopen("recenica.txt", "r");
	FILE* fout;
	fgets(recenica, 100, fin);
	fclose(fin);
	gets(rec);
	while (recenica[duzinaRecenice] != '\0')
		duzinaRecenice++;
	while (rec[duzinaReci] != '\0')
		duzinaReci++;
	while (i <= duzinaRecenice - duzinaReci)
	{
		poklapanje = 0;
		j = 0;
		while (j < duzinaReci && recenica[i + j] == rec[j])
			j++;
		if (j == duzinaReci)
			poklapanje = 1;
		if (poklapanje == 1 && recenica[i + duzinaReci] == ' ')
		{
			//nadjeno poklapanje, izbaci podstring
			for (j = i; j < duzinaRecenice - duzinaReci; j++)
				recenica[j] = recenica[j + duzinaReci];
			duzinaRecenice = duzinaRecenice - duzinaReci;
		}
		i++;
		while (recenica[i] == " ")
			i++;
	}
	recenica[duzinaRecenice] = '\0';
	fout = fopen("nova recenica.txt", "w");
	fputs(recenica, fout);
	fclose(fout);
}
