#include <stdio.h>
int main() {
	int b, c, sumaP = 0, sumaN = 0, i = 0, razlika;
	scanf("%d", &b);
	while (b != 0) {
		c = b % 10;
		if (i == 0) {
			sumaN += c;
			i = 1;
		}
		else {
			sumaP += c;
			i = 0;
		}
		b /= 10;
	}
	razlika = sumaN - sumaP;
	if (razlika == 0 || razlika == 11) {
		printf("Deljiv");
	}
	else {
		printf("Nedeljiv");
	}
	return 0;
}
