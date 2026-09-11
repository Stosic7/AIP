#include <stdio.h>

void MakeDefaultMatrix(int n, int A[9][9]) {
    int t = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = t++;
        }
    }
}

void PrintMatrix(int n, int A[9][9]) {
    int maxBroj = A[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] > maxBroj) {
                maxBroj = A[i][j];
            }
        }
    }

    int sirina = 1;
    int temp = maxBroj;
    while (temp >= 10) {
        sirina++;
        temp /= 10;
    }

    for (int i = 0; i < n; i++) {
        printf("+");
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < sirina + 2; k++) {
                printf("-");
            }
            printf("+");
        }
        printf("\n");

        printf("|");
        for (int j = 0; j < n; j++) {
            printf(" %*d |", sirina, A[i][j]);
        }
        printf("\n");
    }

    printf("+");
    for (int j = 0; j < n; j++) {
        for (int k = 0; k < sirina + 2; k++) {
            printf("-");
        }
        printf("+");
    }
    printf("\n");
}

int main() {
    int n = 9;
    int A[9][9];

    // ------------------------------

    MakeDefaultMatrix(n, A);
    PrintMatrix(n, A);
    printf("-----------------\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                A[i][j] = 0;
            }
        }
    }

    printf("Zamena elemenata na glavnoj dijagonali\n");
    PrintMatrix(n, A);
    printf("-----------------\n");

    // ------------------------------

    MakeDefaultMatrix(n, A);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j) {
                A[i][j] = 0;
            }
        }
    }

    printf("Zamena elemenata ispod glavne dijagonale\n");
    PrintMatrix(n, A);
    printf("-----------------\n");

    // -------------------------------

    MakeDefaultMatrix(n, A);

    printf("Zamena elemenata iznad glavne dijagonale\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                A[i][j] = 0;
            }
        }
    }

    PrintMatrix(n, A);
    printf("-----------------\n");

    // -------------------------------

    MakeDefaultMatrix(n, A);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) {
                A[i][j]= 0;
            }
        }
    }

    printf("Zamena elemenata na sporednoj dijagonali\n");
    PrintMatrix(n, A);
    printf("-----------------\n");

    // -------------------------------

    MakeDefaultMatrix(n, A);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n - 1) {
                A[i][j] = 0;
            }
        }
    }

    printf("Zamena elemenata ispod sporedne dijagonale\n");
    PrintMatrix(n, A);
    printf("-----------------\n");

    // ------------------------------

     MakeDefaultMatrix(n, A);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j < n - 1) {
                A[i][j] = 0;
            }
        }
    }

    printf("Zamena elemenata iznad sporedne dijagonale\n");
    PrintMatrix(n, A);
    printf("-----------------\n");

}
