#include "ControlDePesosDePaquetes.h"
#include <iostream>

int main()
{
	int limite = 0;
	int cantidad = 0;
	double* pesos = registrar(cantidad);
	

	ingresaPesos(pesos, cantidad);
	
	
	std::cout << "===RESULTS===" << std::endl;
	std::cout << "Promedio total: " << calcularTotalidadDePeso(pesos, cantidad) / cantidad << std::endl;
	std::cout << "Ingrese tu limite de peso: ";
	std::cin >> limite;
	std::cout << "Cantidad de pesos que se han de pasar del limite: " << contarEnLimite(pesos, cantidad, limite) << std::endl;
	const double* major = buscarMayorPeso(pesos, cantidad);
	std::cout << "Peso mayor: " << *major;
	 
	std::cout << std::endl;
	delete[] pesos;
	pesos = nullptr;
}


