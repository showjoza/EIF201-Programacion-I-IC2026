#ifndef CONTROLDEPESOSDEPAQUETES_H
#define CONTROLDEPESOSDEPAQUETES_H


double* registrar(int& cantidad);

void ingresaPesos(double *arr, int cantidad);

double calcularTotalidadDePeso(const double* pesos, int cantidad);

int contarEnLimite(const double* pesos, int cantidad, double limite);

const double* buscarMayorPeso(const double* pesos, int cantidad);

#endif


