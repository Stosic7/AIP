#include <stdio.h>

void zamena(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b, c;

    printf("Unesite vrednost promenljive a: ");
    scanf("%d", &a);
    printf("Unesite vrednost promenljive b: ");
    scanf("%d", &b);
    printf("Unesite vrednost promenljive c: ");
    scanf("%d", &c);

    printf("Uneti brojevi: a = %d, b = %d, c = %d\n", a, b, c);

    zamena(&a, &b);
    zamena(&b, &c);

    printf("Brojevi nakon pomeranja: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
