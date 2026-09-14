#include <string.h>
#include <stdio.h>

int main() {
    char recenica[] = "Danas radimo stringove u C-u!";
    char delim[] = " ,.!?";

    char *token = strtok(recenica, delim);

    while (token != NULL) {
        printf("Reč: %s\n", token);
        token = strtok(NULL, delim);
    }

    return 0;
}
