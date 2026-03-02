#include "ProcesamientoDeCadenas.h"

std::string primerNombre(std::string name) {
	size_t position1 = name.find(" "); // Busca la posición del primer espacio en el nombre completo
	return name.substr(0, position1);  // Devuelve la subcadena desde el inicio del nombre hasta la posición del primer espacio, que corresponde al primer nombre
}
std::string primerApellido(std::string lastName) {
	size_t position1 = lastName.find(" "); // Busca la posición del primer espacio en el nombre completo
	size_t position2 = lastName.find(" ", position1 + 1); // Busca la posición del segundo espacio a partir de la posición del primer espacio
	return lastName.substr(position1 + 1, position2 - position1 - 1); // Devuelve la subcadena desde la posición del primer espacio + 1 hasta la posición del segundo espacio - 1, que corresponde al primer apellido
}

int contarVocales(std::string name) {
	std::string vocals = "aeiouAEIOU";
	int count = 0;
	for (int i = 0; i < name.length(); i++) {  // Recorre cada carácter del nombre completo
		if (vocals.find(name[i]) != std::string::npos) { // Si el carácter es una vocal, incrementa el contador
			count++;
		}
	}
	return count;
}

std::string convertirMayusculas(std::string name) {
	for (int i = 0; i < name.length(); i++) { // Recorre cada carácter del nombre completo
		if (name[i] >= 'a' && name[i] <= 'z') {  //Rango de letras minúsculas
			name[i] = name[i] - ('a' - 'A'); // Convertir a mayúscula restando la diferencia entre 'a' y 'A'

		}
	}
	return name;
}
	int obtenerLongitud(std::string name) {
		name.erase(remove(name.begin(), name.end(), ' '), name.end());
		return name.length();
	}
