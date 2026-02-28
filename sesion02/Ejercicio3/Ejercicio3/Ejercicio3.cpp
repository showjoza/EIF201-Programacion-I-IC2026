

#include <iostream>
#include <iomanip>
#include "OperacionesSobreMatriz.h"
int main()
{
	int matriz[MAX_ROWS][MAX_COLUMS] = {};
	int sumaFilas[MAX_ROWS] = {};
	int sumaColumnas[MAX_COLUMS] = {};
	int j = 0;


	leerMatriz(matriz, MAX_ROWS, MAX_COLUMS);
	calcularSumaDeFilas(matriz, sumaFilas, MAX_ROWS, MAX_COLUMS);
	calcularSumaDeColumnas(matriz, sumaColumnas, MAX_ROWS, MAX_COLUMS);
	calcularSumaDeDiagonal(matriz, MAX_ROWS, MAX_COLUMS);


	std::cout << std::setw(3) << "===SUMA DE FILAS===" << std::endl;
	   for (int i = 0; i < MAX_ROWS; i++) {
	   std::cout << "SUMA DE FILA " << i+1 << " = " << sumaFilas[i] << std::endl;
	  
		}
	
		std::cout << std::endl;

		std::cout << std::setw(3) << "===SUMA DE COLUMNAS===" << std::endl;
		for (int i = 0; i < MAX_ROWS; i++) {
	    std::cout << "SUMA DE COLUMNA " << i+1 << " = " << sumaColumnas[i] << std::endl;
	
			}
		

		std::cout << std::endl;
		std::cout << "SUMA DE DIAGONAL: " << calcularSumaDeDiagonal(matriz, MAX_ROWS, MAX_COLUMS) << std::endl;
		std::cout << std::endl;

		std::cout << std::setw(3) << "===MATRIZ <iomanip>===" << std::endl;
		imprimirMatriz(matriz, MAX_ROWS, MAX_COLUMS);

		return 0;
	}

	
