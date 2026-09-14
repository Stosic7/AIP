// Ručno računanje dužine prolaskom kroz niz do '\0'
int duzina_rucno(char* s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char str[] = "Programiranje";
  
    int d1 = strlen(str);
    int d2 = duzina_rucno(str);

    printf("Dužina (strlen): %d\n", d1);
    printf("Dužina (ručno):  %d\n", d2);

    return 0;
}
