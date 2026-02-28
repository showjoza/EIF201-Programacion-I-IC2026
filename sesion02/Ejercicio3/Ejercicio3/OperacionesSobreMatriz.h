#ifndef OPERACIONESSOBREMATRIZ_H
#define  OPERACIONESSOBREMATRIZ_H
#include <iostream>
#include <iomanip>
const int MAX_ROWS = 3;
const int MAX_COLUMS = 3;

void leerMatriz(int matriz[][MAX_COLUMS], int rows, int colums);
void calcularSumaDeFilas(int matriz[][MAX_COLUMS],int sumRows[], int rows, int colums);
void calcularSumaDeColumnas(int matriz[][MAX_COLUMS], int sumColumns[], int rows, int colums);
int calcularSumaDeDiagonal(int matriz[][MAX_COLUMS], int rows, int colums);

void imprimirMatriz(int matriz[][MAX_COLUMS], int rows, int colums);
#endif 
