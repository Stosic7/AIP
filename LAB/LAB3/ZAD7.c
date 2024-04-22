#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int i, j, k, niz1[100], niz2[100], niz3[200], N, M, pom;

    printf("Unesite N: \n");
    scanf("%d", &N);

    printf("Unesite elemente prvog niza: (N)\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &niz1[i]);
    }

    printf("Niz1: \n");
    for (i = 0; i < N; i++)
    {
        printf("%2d", niz1[i]);
    }
    printf("\n");

    printf("Unesite M: \n");
    scanf("%d", &M);

    printf("Unesite elemente drugog niza: (M)\n");
    for (j = 0; j < M; j++)
    {
        scanf("%d", &niz2[j]);
    }

    printf("Niz2: \n");
    for (j = 0; j < M; j++)
    {
        printf("%2d", niz2[j]);
    }

    printf("\n");

    printf("Spajanje nizova: \n");
    k = 0;
    for (i = 0; i < N; i++)
    {
        niz3[k++] = niz1[i];
    }
    for (j = 0; j < M; j++)
    {
        niz3[k++] = niz2[j];
    }

    printf("Niz3: \n");
    for (i = 0; i < N + M; i++)
    {
        printf("%2d", niz3[i]);
    }

    printf("\n");

    for (i = 0; i < N + M - 1; i++)
    {

        for (j = 0; j < N + M - i - 1; i++)
        {

            if (niz3[j] > niz3[j + 1])
            {

                pom = niz3[j];
                niz3[j] = niz3[j + 1];
                niz3[j + 1] = pom;


            }

        }

    }

    printf("Sortiran niz3: \n");
    for (i = 0; i < N + M; i++)
    {
        printf("%2d", niz3[i]);
    }

    printf("\n");


    return 0;
}
