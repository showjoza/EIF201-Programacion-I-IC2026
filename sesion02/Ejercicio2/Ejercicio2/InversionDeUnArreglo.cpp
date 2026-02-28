#include "InversionDeUnArreglo.h"

void invertirArreglo(const int arreglo[], int arregloInvertido[], int size) {
	int j = size - 1;
	for (int i = 0; i < size; i++) {
		arregloInvertido[i] = arreglo[j];
		j--;
	}
}
