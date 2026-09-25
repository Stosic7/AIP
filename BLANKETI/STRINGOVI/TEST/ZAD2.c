#include 
#define MAX 200

int main(void)
{
    char s[MAX];
    int i, j;
    char pom;
    int suglasnici = 0;
    int istePozicije = 0;

    printf("Unesite recenicu: ");
    fgets(s, MAX, stdin);

    j = 0;
    while (s[j] != '\0' && s[j] != '\n')
    {
        char c = s[j];
        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';

        if (c >= 'a' && c <= 'z')
        {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            {
                suglasnici++;
            }
        }
        j++;
    }
    s[j] = '\0';
    j--;

    i = 0;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            istePozicije += 2;
        }

        pom = s[i];
        s[i] = s[j];
        s[j] = pom;

        i++;
        j--;
    }

    if (i == j)
    {
        istePozicije++;
    }

    printf("Obrnuta recenica: %s\n", s);
    printf("Broj suglasnika: %d\n", suglasnici);
    printf("Broj karaktera na istoj poziciji: %d\n", istePozicije);

    return 0;
}
