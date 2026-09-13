#include <stdio.h>
#define MAX 100

int main() {
    int n = 10;
    int niz[MAX];
    int t = 1;

    for (int i = 0; i < n; i++) {
        niz[i] = t++;
    }

    int target = 4;

    for (int i = target; i < n - 1; i++) {
        niz[i] = niz[i + 1];
    }
    n--;

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", niz[i]);
    }
}
