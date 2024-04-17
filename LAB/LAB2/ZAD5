#include <stdio.h>

int main() {
    int B, cifra, sum, temp;

    printf("Unesite broj B: ");
    scanf("%d", &B);

    // Određivanje zbira cifara
    sum = 0;
    temp = B;
    while (temp != 0) {
        cifra = temp % 10;
        sum += cifra;
        temp /= 10;
    }
    printf("Zbir cifara broja B: %d\n", sum);

    // Binarna reprezentacija
    printf("Binarna reprezentacija broja B: ");
    for (int i = 31; i >= 0; i--) {
        int bit = (B >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    // Oktalna reprezentacija
    printf("Oktalna reprezentacija broja B: ");
    for (int i = 30; i >= 0; i -= 3) {
        int octal = (B >> i) & 7;
        printf("%o", octal);
    }
    printf("\n");

    // Heksadecimalna reprezentacija
    printf("Heksadecimalna reprezentacija broja B: ");
    for (int i = 28; i >= 0; i -= 4) {
        int hex = (B >> i) & 0xF;
        if (hex < 10) {
            printf("%d", hex);
        }
        else {
            printf("%c", 'A' + (hex - 10));
        }
    }
    printf("\n");

    return 0;
}
