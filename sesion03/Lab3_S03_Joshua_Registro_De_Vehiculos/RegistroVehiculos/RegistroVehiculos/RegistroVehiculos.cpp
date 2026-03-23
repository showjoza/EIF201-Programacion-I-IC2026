
#include "Flota.h"
#include <iostream>

int main()
{
	int option = 0;
	UNA::Flota flota;
	do {
		std::cout << std::endl;
		std::cout << "1.Registrar vehiculo" << std::endl;
		std::cout << "2.Buscar vehiculo por placa" << std::endl;
		std::cout << "3.Mostrar vehiculos por marca" << std::endl;
		std::cout << "4.Registrar kilometros a un vehiculo" << std::endl;
		std::cout << "5.Desactivar vehiculo(fuera de servicio)" << std::endl;
		std::cout << "6.Reactivar vehiculo" << std::endl;
		std::cout << "7.Eliminar vehiculo(dar de baja definitiva)" << std::endl;
		std::cout << "8.Mostrar flota completa" << std::endl;
		std::cout << "9.mostrar cantidad de vehiculos activos" << std::endl;
		std::cout << "10.Salir" << std::endl;
		std::cout << "Ingrese su opcion: ";
		std::cin >> option;

		std::cout << std::endl;
		switch (option) {
		case 1: {
			std::string placa = "";
			std::string marca = "";
			double kilometraje = 0.0;
			int anio = 0;

			std::cout << "Ingrese la placa: ";
			std::cin >> placa;
			std::cout << "Ingrese la marca: ";
			std::cin >> marca;
			std::cout << "Ingrese el kilometraje: ";
			std::cin >> kilometraje;
			std::cout << "Ingrese el anio: ";
			std::cin >> anio;
			UNA::Vehiculo* vehiculo = new UNA::Vehiculo(placa, marca, anio, kilometraje);
			flota.agregarVehiculo(vehiculo);

			std::cout << "Vehiculo registrado correctamente..." << std::endl;
			break;
		}

		case 2: {
			std::string placa = "";

			std::cout << "Ingrese la placa: ";
			std::cin >> placa;

			UNA::Vehiculo* vehiculo = flota.buscarPorPlacas(placa);
			if (vehiculo != nullptr) {
				vehiculo->mostrar();
			}
			else {
				std::cout << "El vehiculo no encontrado...";
			}
		
			break;
		}
		case 3: {
			std::string marca = "";

			std::cout << "Ingrese la marca: ";
			std::cin >> marca;

			flota.mostrarPorMarca(marca);
			break;
		}

		 case 4: {
			 
			std::string placa = "";
			double km = 0.0;

			std::cout << "Ingrese la placa del vehiculo: ";
			std::cin >> placa;
			std::cout << "Ingrese la cantidad de kilometros a registrar: ";
			std::cin >> km;
			UNA::Vehiculo* vehiculo = flota.buscarPorPlacas(placa);
			if (vehiculo != nullptr) {
				vehiculo->registrarKilometros(km);
			}
			else {
				std::cout << "No se encuentra un vehiculo con esa placa." << std::endl;
			}
			break;
		}
		case 5: {
			std::string placa = "";
			std::cout << "Ingrese la placa del vehiculo a desactivar: ";
			std::cin >> placa;

			UNA::Vehiculo* vehiculo = flota.buscarPorPlacas(placa);

			if (vehiculo != nullptr) {
				vehiculo->desactivar();
				std::cout << "Vehiculo desactivado correctamente..." << std::endl;
			}
			else {
				std::cout << "No se encontro un vehiculo con esa placa";
			}
			break;
		}
		case 6: {
			std::string placa = "";
			std::cout << "Ingrese la placa del vehiculo a activar: ";
			std::cin >> placa;

			UNA::Vehiculo* vehiculo = flota.buscarPorPlacas(placa);

			if (vehiculo != nullptr) {
				vehiculo->reactivar();
				std::cout << "Vehiculo activado correctamente..." << std::endl;
			}
			else {
				std::cout << "No se encontro un vehiculo con esa placa.";
			}
			break;
		}
		case 7: {
			std::string placa = "";

			std::cout << "Ingrese la placa del vehiculo a eliminar: ";
			std::cin >> placa;
			flota.eliminarVehiculo(placa);

			break;
		} case 8: {
			flota.mostrarTodos();
			break;
		} case 9: {
			int contadorActivos = flota.contarActivos();
			std::cout << "Activos: " << contadorActivos << std::endl;
			break;
		}
		}
	}  while (option != 10);
		return 0;
	}