#include <stdio.h>
#include <string.h>
#define maxsize 100
void zameni(char* A, char* B)
{
	char pom[maxsize];
	strcpy(pom, A);
	strcpy(A, B);
	strcpy(B, pom);
}
void main()
{
	int i, j, n;
	int imin = 0, imax = 0;
	char str[50][maxsize];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%s", &str[i]);
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (strcmp(str[i], str[j]) > 0)
				zameni(str[i], str[j]);
	for (i = 0; i < n; i++)
	{
		if (strlen(str[i]) < strlen(str[imin]))
			imin = i;
		if (strlen(str[i]) > strlen(str[imax]))
			imax = i;
	}
	printf("\n\n");
	for (i = 0; i < n; i++)
		printf("%s\n", str[i]);
	printf("\nNajkraci string je: %s.", str[imin]);
	printf("\nNajduzi string je: %s.", str[imax]);
}
