#include <stdio.h>

int main() {
    FILE* file = fopen("interval.txt", "r");
    if (file == NULL) {
        printf("Greska prilikom otvaranja fajla.");
        return 1;
    }

    int a, b;
    fscanf(file, "%d %d", &a, &b);
    fclose(file);

    int i;
    for (i = a; i <= b; i++) {
        int num = i;
        int max_digit = num % 10;
        int sum = 0;
        int count = 0;

        while (num > 0) {
            int digit = num % 10;
            sum += digit;
            count++;

            if (digit > max_digit) {
                max_digit = digit;
            }

            num /= 10;
        }

        if (max_digit > (sum - max_digit) / (count - 1)) {
            printf("%d ", i);
        }
    }

    return 0;
}
