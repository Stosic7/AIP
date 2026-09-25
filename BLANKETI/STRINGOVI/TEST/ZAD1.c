#include 

int main() {
    char s[200];
    int i = 0;
    int brojacCifara = 0;
    int sumaCifara = 0;

    printf("Unesite tekst: ");
    fgets(s, 200, stdin);

    while (s[i] != '\0') {
        if (s[i] >= '0' && s[i] <= '9') {
            brojacCifara++;
            sumaCifara += (s[i] - '0');
        }
        i++;
    }

    printf("Broj cifara: %d\n", brojacCifara);
    printf("Suma cifara: %d\n", sumaCifara);

    return 0;
}
