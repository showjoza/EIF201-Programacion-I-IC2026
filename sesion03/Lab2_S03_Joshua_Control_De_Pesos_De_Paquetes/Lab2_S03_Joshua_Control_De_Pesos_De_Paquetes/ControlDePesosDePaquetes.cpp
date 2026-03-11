#include "ControlDePesosDePaquetes.h"
#include <iostream>

double* registrar(int& cantidad) {
	bool check = true;
	std::cout << "Enter your amount: ";
	std::cin >> cantidad;
	while (check) {
		if (cantidad <= 0) {
			std::cout << "Enter again your number (it can't be negative or 0): ";
			std::cin >> cantidad;
		}
		else {
			check = false;
		}
	}
	double* array = new double[cantidad];

	return array;
}
void ingresaPesos(double* pesos, int cantidad) {
	int i = 0;
	while (i < cantidad) {

		std::cout << "Enter your Weights: " << "[" << (i + 1) << "]: ";
		std::cin >> pesos[i];
		i++;
	}
	}

double calcularTotalidadDePeso(const double* pesos, int cantidad) {
	double suma = 0.0;
	for (int i = 0; i < cantidad; i++) {
		suma += pesos[i];
	}
	return suma;
}

int contarEnLimite(const double* pesos, int cantidad, double limite) {
	int contador = 0;
	for (int i = 0; i < cantidad; i++) {
		if (pesos[i] > limite) {
			contador++;
			
		}
	}
	return contador;
}

const double* buscarMayorPeso(const double* pesos, int cantidad) {
	int pos = 0;
	for (int i = 1; i < cantidad; i++) {

		if (pesos[i] > pesos[pos]) {
			pos = i;
		}
	}
	return &pesos[pos];
}