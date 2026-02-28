
#include <iostream>
#include "ProcesamientoDeCadenas.h"
int main()
{
	std::string fullName = "";
	bool correctFormat = false;


	do {
		std::cout << "Enter your full name (Name_space_firstLastName_space_secondLastName): ";
		std::getline(std::cin, fullName);

		size_t position1 = fullName.find(" "); // Busca la posición del primer espacio en el nombre completo
		size_t position2 = std::string::npos; // Inicializa la posición del segundo espacio como npos para indicar que no se ha encontrado
		size_t position3 = std::string::npos; // Inicializa la posición del tercer espacio como npos para indicar que no se ha encontrado

		if (position1 != std::string::npos) {
			position2 = fullName.find(" ", position1 + 1); // Si se encuentra el primer espacio, busca el segundo espacio a partir de la posición del primer espacio
		}
		if (position2 != std::string::npos) { // Si se encuentra el segundo espacio, busca el tercer espacio a partir de la posición del segundo espacio
			position3 = fullName.find(" ", position2 + 1); // Si se encuentra el segundo espacio, busca el tercer espacio a partir de la posición del segundo espacio


		} // Si se encuentra el primer espacio, el segundo espacio y no se encuentra un tercer espacio, el formato es correcto
		if ((position1 != std::string::npos && position2 != std::string::npos) && position3 == std::string::npos) {
			correctFormat = true;
		}
		else { // Si no se encuentra el primer espacio, el segundo espacio o si se encuentra un tercer espacio, el formato es incorrecto
			std::cout << "Incorrect format. Please enter your full name in the correct format (Name_space_firstLastName_space_secondLastName) " << std::endl;
		}
		// El bucle se repetirá hasta que el usuario ingrese un nombre completo en el formato correcto
	} while (!correctFormat);

	std::cout << std::endl;
	std::cout << "\t==RESULTS==" << std::endl;
	std::cout << "First Name: " << primerNombre(fullName) << std::endl;
	std::cout << "First Last Name: " << primerApellido(fullName) << std::endl;
	std::cout << "Number of Vowels: " << contarVocales(fullName) << std::endl;
	std::cout << "Full Name in Uppercase: " << convertirMayusculas(fullName) << std::endl;

	return 0;

}
