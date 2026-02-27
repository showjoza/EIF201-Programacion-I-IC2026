#include "EstadisticaDeUnArray.h"
#include <iostream>
void llenarDatos(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		std::cout << "Enter 10 numbers[" << (i + 1) << "]: ";
		std::cin >> arr[i];

	}
}
int valorMayor(int arr[], int size) {
	int major = arr[0];

	for (int i = 0; i < size; i++) {

		if (arr[i] > major) {
			major = arr[i];
		}
	}
	return major;
}
int valorMenor(int arr[], int size) {
	int minor = arr[0];

    for (int i = 0; i < size; i++) {
		if (arr[i] < minor) {
			minor = arr[i];
		}
		}
		return minor;
	
}
int sumaElementos(int arr[], int size) {
	int total = 0;
	for (int i = 0; i < size; i++) {
		total += arr[i];
	}
	return total;

}
double promedioAritmetico(int arr[], int size) {
	int total = sumaElementos(arr, MAX_SIZE);

	return (double)total / MAX_SIZE;
}
void imprimirResultados(int arr[]) {
	std::cout << "\t\t=====RESULTS=====\t\t" << std::endl;
	std::cout << "Major number is: " << valorMayor(arr, MAX_SIZE) << "\n";
	std::cout << "Minor number is: " << valorMenor(arr, MAX_SIZE) << "\n";
	std::cout << "sum of elements: " << sumaElementos(arr, MAX_SIZE) << "\n";
	std::cout << "Average: " << promedioAritmetico(arr, MAX_SIZE) << std::endl;

}
