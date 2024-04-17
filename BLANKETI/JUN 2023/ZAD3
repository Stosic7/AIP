#include <stdio.h>
#include <string.h>

int imaLiPalindrom(char* ulaz, int duzPalindroma)
{
    int duzRecenice = strlen(ulaz);
    int i = 0, jestePal = 0, j, rikverc, pozDesnog;
    while (i < (duzRecenice - duzPalindroma + 1) && !jestePal)
    {
        jestePal = 1;
        rikverc = 0;
        for (j = i; j < (i + duzPalindroma / 2); j++)
        {
            pozDesnog = i + duzPalindroma - 1;
            pozDesnog = pozDesnog - rikverc;
            if (ulaz[j] != ulaz[pozDesnog])
                jestePal = 0;
            rikverc++;
        }
        i++;
    }
    if (jestePal)
        return --i;
    else
        return -1;
}

int main()
{
    int n, poz;
    char recenica[20];
    gets(recenica);
    scanf("%d", &n);
    poz = imaLiPalindrom(recenica, n);
    if (poz == -1)
        printf("nema palindroma\n");
    else
        printf("pozicija prvog palindroma je: %d\n", poz);
    return 0;
}
