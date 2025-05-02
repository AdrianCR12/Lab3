#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SIZE 5

void generarMatriz(int matrix[SIZE][SIZE]) {
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++){
			matrix[i][j] = rand() % 2;

		}
	}
}

void imprimirMatriz(int matrix[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			printf("%2d ", matrix[i][j]);
		}
		printf("\n");
	}
}








int findLargestLine( int matrix[SIZE][SIZE]) {
	int maxlen = 0;

	for ( int k = 0; k < SIZE; k++) {
		int len1 = 0;
		for (int i = 0; i + k < SIZE; i++) {
			int j = i + k;
			if (matrix[i][j] == 1)
				len1++;
			else {
				if (len1 > maxlen) maxlen = len1;
				len1 = 0;
			}
		
		}
		if (len1 > maxlen) maxlen = len1;

		int len2 = 0;
		for (int j = 0; j + k < SIZE; j++) {
			int i = j + k;
			if (matrix[i][j] == 1)
				len2++;
			else {
				if (len2 > maxlen) maxlen = len2;
				len2 = 0;
			}
		}
		
		if (len2 > maxlen) maxlen = len2;

	
	
	
	}

	return maxlen;


}

int main() {
	int matrix[SIZE][SIZE];
	generarMatriz(matrix);
	imprimirMatriz(matrix);
 	
	//	= {
	//	{0, 1, 1, 1, 0},
	//	{0, 1, 1, 1, 1},
	//	{1, 1, 1, 1, 0},
	//	{0, 1, 1, 0, 1},
	//	{1, 0, 1, 0, 1} 
	//};

	int largestLine = findLargestLine(matrix);
	printf("El tamaño de la secuencia de 1s más grande es: %d\n", largestLine);
	return 0;



}
