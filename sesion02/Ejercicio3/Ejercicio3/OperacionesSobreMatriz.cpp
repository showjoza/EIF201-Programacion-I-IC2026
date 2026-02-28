#include "OperacionesSobreMatriz.h"

void leerMatriz(int matriz[][MAX_COLUMS], int rows, int colums) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < colums; j++) {
			std::cout << "Enter 9 elements[" << i << "]" << "[" << j << "]: ";
			std::cin >> matriz[i][j];
		}
	}
	std::cout << std::endl;
}
void calcularSumaDeFilas(int matriz[][MAX_COLUMS], int sumasFilas[], int rows, int colums) {
	
	for (int i = 0; i < rows; i++) {
		sumasFilas[i] = {};
		for (int j = 0; j < colums; j++) {
			sumasFilas[i] += matriz[i][j];
		}
	}
}
void calcularSumaDeColumnas(int matriz[][MAX_COLUMS], int sumasColumnas[], int rows, int colums) {
	
	for (int j = 0; j < colums; j++) {
		for (int i = 0; i < rows; i++) {
			sumasColumnas[j] += matriz[i][j];

		}
	} 
}
int calcularSumaDeDiagonal(int matriz[][MAX_COLUMS], int rows, int colums) {
	int suma = 0;
	for (int i = 0; i < rows; i++) {
		suma += matriz[i][i];
	}

	return suma;
}
void imprimirMatriz(int matriz[][MAX_COLUMS], int rows, int colums) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < colums; j++) {
			std::cout << std::setw(6) << matriz[i][j];
		}
		std::cout << std::endl;

	}
}

