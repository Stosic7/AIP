#include <stdio.h>
#include <stdlib.h>

double toReal(char* broj) {
    return atof(broj);
}

int main() {
    char s[255], op = '+';
    char broj[255];
    int i = 0, j;
    double r = 0;
    gets(s);
    while (s[i] != '\0') {
        j = 0;
        while (s[i] != '\0' && s[i] != '+' &&
            s[i] != '-' && s[i] != '*' && s[i] != '/') {
            broj[j++] = s[i++];
        }
        broj[j] = '\0';
        switch (op) {
        case '+':
            r += toReal(broj); break;
        case '-':
            r -= toReal(broj); break;
        case '*':
            r *= toReal(broj); break;
        case '/':
            r /= toReal(broj); break;
        default:
            r += toReal(broj); break;
        }
        op = s[i];
        if (s[i] != '\0')
            i++;
    }
    printf("\n%g\n", r);
    return 0;
}
