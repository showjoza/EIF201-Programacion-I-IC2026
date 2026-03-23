#include "Flota.h"
#include <iostream>
using namespace UNA;
Flota::Flota(int capacidad) : capacidad(capacidad), cantidad(0) {
	vehiculos = new Vehiculo * [capacidad];
	for (int i = 0; i < capacidad; i++) {
		vehiculos[i] = nullptr;
	}
}


Flota::~Flota() {
	for (int i = 0; i < cantidad; i++) {
		delete vehiculos[i];
		vehiculos[i] = nullptr;
	}
	delete[] vehiculos;
	vehiculos = nullptr;
	std::cout << "Flota destruido";
}

	void Flota::agregarVehiculo(Vehiculo* vehiculo) {
		if (cantidad == capacidad) {
			int nuevaCapacidad = capacidad * 3;

			Vehiculo** nuevoArreglo = new Vehiculo * [nuevaCapacidad];

			for (int i = 0; i < cantidad; i++) {
				nuevoArreglo[i] = vehiculos[i];
			}
			for (int i = cantidad; i < nuevaCapacidad; i++) {
				nuevoArreglo[i] = nullptr;
			}

			delete[] vehiculos;
			vehiculos = nuevoArreglo;
			capacidad = nuevaCapacidad;
		}
		vehiculos[cantidad] = vehiculo;
			cantidad++;
		}
		Vehiculo* Flota::buscarPorPlacas(std::string placa) {
			for (int i = 0; i < cantidad; i++) {

				if (vehiculos[i]->getPlaca() == placa) {

					return vehiculos[i];
				}
			}
					return nullptr;
				}
		
		void Flota::mostrarPorMarca(std::string marca) {
			int buscados = 0;

			for (int i = 0; i < cantidad; i++) {
				if (vehiculos[i]->getMarca() == marca) {
					vehiculos[i]->mostrar();
					std::cout << std::endl;
					buscados++;
				}
			}
			if (buscados == 0) {
				std::cout << "No hay vehiculos de la marca " << marca << "." << std::endl;
			}
			else {
				std::cout << "Se encontraron " << buscados
					<< " vehiculos de la marca " << marca << "." << std::endl;
			}
		}
		bool Flota::eliminarVehiculo(std::string placa) {
			for (int i = 0; i < cantidad; i++) {
				if (vehiculos[i]->getPlaca() == placa) {

					if (vehiculos[i]->getActivo() == true) {
						std::cout << "Primero debe desactivarse el vehiculo antes de eliminar." << std::endl;
						return false;
					}
					delete vehiculos[i];

					for (int j = i; j < cantidad - 1; j++) {
						vehiculos[j] = vehiculos[j + 1];
					}
					vehiculos[cantidad - 1] = nullptr;
					cantidad--;
					std::cout << "Eliminado correctamente...";
					std::cout << std::endl;
					return true;
				}
			}
			std::cout << "No se busco un vehiculo con esa placa." << std::endl;
			return false;
		}
		

			int Flota::contarActivos() {
			int contarActivos = 0;
			for (int i = 0; i < capacidad; i++) {
				if (vehiculos[i] != nullptr && vehiculos[i]->getActivo()) {
					{
						contarActivos++;
					}
				}
			}
			return contarActivos;
		}
			void Flota::mostrarTodos() {
				if (capacidad == 0) {
					std::cout << "La flota esta vacia." << std::endl;
					return;
				}
				for (int i = 0; i < cantidad; i++) {
					vehiculos[i]->mostrar();
					std::cout << "==================================" << std::endl;
				}
			}
