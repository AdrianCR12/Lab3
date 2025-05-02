#include <stdio.h>

int SumarDiagonales(int *matriz, int n) {
	int suma = 0;
	for (int i = 0; i < n; i++) {
		suma += matriz[i * n + i];

		suma += matriz[i * n + (n + 1 - i)];
	} 
	if (n % 2 == 1) {
		suma -= matriz[(n/2) * n + (n/2)];
	
	}
	return suma;	


}

void ImprimirMatriz(int *matriz, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%4d", matriz[i * n + j]);
		}
		printf("\n");
	}

}

int main() {
	int mat1[] = {2, 5, 6, 8, 9, 1, 3, 4, 7};

	int n1 = 3;
	printf("Caso 1 (3x3):\n");
	ImprimirMatriz(mat1, n1);
	printf("Suma de las diagonales = %d\n\n", SumarDiagonales(mat1, n1));
	int mat2[] = {3, 34, 54, 23, 15, 7, 7, 12, 18, 10, 13, 23, 45, 12, 45, 23};
	int n2 = 4;
	printf("Caso 2 (4x4):\n");
	ImprimirMatriz(mat2, n2);
	printf("Suma de las diagonales = %d\n\n", SumarDiagonales(mat2, n2));
	int mat3[] = {1, 23, 3, 4, 7, 8, 12, 7, 14, 22, 34, 15, 91, 13, 23, 12, 11, 14, 23, 41, 12, 7, 33, 4, 8};
	int n3 = 5;
	printf("Caso 3 (5x5):\n");
	ImprimirMatriz(mat3, n3);
	printf("Suma de las diagonales = %d\n\n", SumarDiagonales(mat3, n3));
	return 0;


}

