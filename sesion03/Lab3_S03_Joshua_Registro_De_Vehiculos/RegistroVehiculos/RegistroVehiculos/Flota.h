#ifndef FLOTA_H
#define FLOTA_H
#include "Vehiculo.h"
namespace UNA {
	class Flota
	{
	private:
		Vehiculo** vehiculos;
		int cantidad;
		int capacidad;
	public:
		Flota(int capacidad = 3);
		~Flota();

		void agregarVehiculo(Vehiculo* nuevo);
		Vehiculo* buscarPorPlacas(std::string placa);
		void mostrarPorMarca(std::string marca);
		bool eliminarVehiculo(std::string placa);
		int contarActivos();
		void mostrarTodos();


	};
}
#endif












