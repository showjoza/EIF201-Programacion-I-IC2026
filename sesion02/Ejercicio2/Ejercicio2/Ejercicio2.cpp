// Ejercicio2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "InversionDeUnArreglo.h"
int main()
{
	
	int size = 0;

	do {


		std::cout << "Enter the size of the array (max 20): ";
		std::cin >> size;
		if (size < 1 || size > MAX_SIZE) {
			std::cout << "Incorrect size: " << size << " (max 1-20)" << std::endl;
			
		}
		else {
			std::cout << "Correct size: " << size << std::endl;
		}

	} while (size < 1 || size > MAX_SIZE);
	int OriginalArray[MAX_SIZE] = {};
	int InvertirArray[MAX_SIZE] = {}; 

	for (int i = 0; i < size; i++) {
		std::cout << "Enter the value[" << (i + 1) << "]: ";
		std::cin >> OriginalArray[i];
	}

	std::cout << "\n===ORIGINAL_ARRAY===\t" << std::endl;
		for (int i = 0; i < size; i++) {
			std::cout << OriginalArray[i] << " ";
		}
		invertirArreglo(OriginalArray, InvertirArray, size);

		std::cout << "\n===INVERTED_ARRAY===\t" << std::endl;
		for (int i = 0; i < size; i++) {
			std::cout << InvertirArray[i] << " ";
		}



		return 0;
}