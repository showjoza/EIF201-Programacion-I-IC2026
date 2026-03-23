#include "Vehiculo.h"
#include <iostream>
using namespace UNA;
Vehiculo::Vehiculo(std::string placa, std::string marca, int anio, double kilometraje) : placa(placa), marca(marca), anio(anio),
 kilometraje(kilometraje), activo(true) {}

std::string Vehiculo::getPlaca() const {
	return placa;
}
std::string Vehiculo::getMarca() const {
	return marca;
}
int Vehiculo::getAnio() const {
	return anio;
}
double Vehiculo::getKilometraje() const {
	return kilometraje;
}
bool Vehiculo::getActivo() const {
	return activo;
}
void Vehiculo::registrarKilometros(double km) {
	if (!activo) {
		std::cout << "El vehiculo esta fuera de servicio...";
		return;
	}
	if (km <= 0) {
		std::cout << "Debe ser un numero positivo...";
		return;
	} 
	
	kilometraje += km;
	std::cout << "Se realizo correctamente...";
	

	}
	

void Vehiculo::desactivar() {
	activo = false;
}
void Vehiculo::reactivar() {
	activo = true;
}

void Vehiculo::mostrar() const {
	std::cout << "===INFORMACION DE VEHICULO===" << std::endl;
	std::cout << "Placa: " << placa << std::endl;
	std::cout << "Marca: " << marca << std::endl;
	std::cout << "Kilometraje: " << kilometraje << std::endl;
	if (activo == true) {
		std::cout << "ACTIVO" << std::endl;
	} if (activo == false) {
		std::cout << "FUERA DE SERVICIO";
	}
	std::cout << std::endl;
}
