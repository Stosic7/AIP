#include <stdio.h>

int main() {
    int n, k;
    printf("Unesi prirodan broj N: ");
    scanf("%d", &n);
    printf("Unesi broj mesta za rotaciju k: ");
    scanf("%d", &k);

    int brojCifara = 0;
    int temp = n;
    while (temp != 0) {
        brojCifara++;
        temp /= 10;
    }

    int stepenK = 1;
    for (int i = 0; i < k; i++) {
        stepenK *= 10;
    }
    printf("Stepen k: %d\n", stepenK);

    int desniDeo = n % stepenK;
    int leviDeo = n / stepenK;

    printf("Desni deo: %d\n", desniDeo);
    printf("Levi deo: %d\n", leviDeo);

    int stepenOstatak = 1;
    for (int i = 0; i < brojCifara - k; i++) {
        stepenOstatak *= 10;
    }
    printf("stepen ostatak: %d\n", stepenOstatak);

    int rezultat = desniDeo * stepenOstatak + leviDeo;

    printf("Rotirani broj je: %d\n", rezultat);

    return 0;
}
