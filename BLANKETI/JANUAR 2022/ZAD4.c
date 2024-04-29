#include <stdio.h>
int main()
{
	int i, j, N, M, k, count, start, end, pom, row, col;
	printf("Unesite M, N i k:\n");
	scanf("%d", &M);
	scanf("%d", &N);
	scanf("%d", &k);
	int A[10][10];
	for (i = 0; i < M; i++)
		for (j = 0; j < N; j++)
			scanf("%d ", &A[i][j]);
	count = 0;
	row = 0;
	col = 0;
	while (count < k) {
		if (count % 2 == 0) {
			start = 0;
			end = N - 1;
			while (start < end) {
				pom = A[row % M][start];
				A[row % M][start] = A[row % M][end];
				A[row % M][end] = pom;
				start += 1;
				end -= 1;
			}
			row++;
			count++;
		}
		else {
			start = 0;
			end = M - 1;
			while (start < end) {
				pom = A[start][col % N];
				A[start][col % N] = A[end][col % N];
				A[end][col % N] = pom;
				start += 1;
				end -= 1;
			}
			col++;
			count++;
		}
	}
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	return 0;
}
