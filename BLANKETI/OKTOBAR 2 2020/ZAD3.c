#include <stdio.h>

#define MAX_SIZE 100

typedef struct {
    float elements[MAX_SIZE];
    int size;
} Set;

void initialize(Set* set) {
    set->size = 0;
}

void addToSet(Set* set, float element) {
    if (set->size < MAX_SIZE) {
        set->elements[set->size++] = element;
    }
}

void removeFromSet(Set* set, float element) {
    for (int i = 0; i < set->size; i++) {
        if (set->elements[i] == element) {
            for (int j = i; j < set->size - 1; j++) {
                set->elements[j] = set->elements[j + 1];
            }
            set->size--;
            break;
        }
    }
}

int isInSet(Set* set, float element) {
    for (int i = 0; i < set->size; i++) {
        if (set->elements[i] == element) {
            return 1;
        }
    }
    return 0;
}

void unionSets(Set* result, Set* set1, Set* set2) {
    for (int i = 0; i < set1->size; i++) {
        addToSet(result, set1->elements[i]);
    }
    for (int i = 0; i < set2->size; i++) {
        if (!isInSet(result, set2->elements[i])) {
            addToSet(result, set2->elements[i]);
        }
    }
}

void differenceSets(Set* result, Set* set1, Set* set2) {
    for (int i = 0; i < set1->size; i++) {
        if (!isInSet(set2, set1->elements[i])) {
            addToSet(result, set1->elements[i]);
        }
    }
}

void printSet(Set* set) {
    printf("{ ");
    for (int i = 0; i < set->size; i++) {
        printf("%.2f ", set->elements[i]);
    }
    printf("}\n");
}

int main() {
    Set A, B, C, D;
    float element;

    initialize(&A);
    initialize(&B);
    initialize(&C);
    initialize(&D);

    printf("Unesite elemente skupa A (unesite 0 za kraj unosa):\n");
    do {
        scanf("%f", &element);
        if (element != 0) {
            addToSet(&A, element);
        }
    } while (element != 0);

    printf("Unesite elemente skupa B (unesite 0 za kraj unosa):\n");
    do {
        scanf("%f", &element);
        if (element != 0) {
            addToSet(&B, element);
        }
    } while (element != 0);

    printf("Unesite elemente skupa C (unesite 0 za kraj unosa):\n");
    do {
        scanf("%f", &element);
        if (element != 0) {
            addToSet(&C, element);
        }
    } while (element != 0);

    unionSets(&D, &C, &A);
    differenceSets(&D, &D, &B);

    printf("Skup A: ");
    printSet(&A);

    printf("Skup B: ");
    printSet(&B);

    printf("Skup C: ");
    printSet(&C);

    printf("Skup D (C U (A \\ B)): ");
    printSet(&D);

    return 0;
}
