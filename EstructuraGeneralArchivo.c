/**
#include <stdio.h>

//Definicion de la funci�n
//Estructura V 1-2021-03-24
int function (int a, int b, char s[], int* p){

	//Declaraci�n de variables locales

	//Procedimiento

	//Retorno de resultados

	return 0;
}

*/
#include <stdio.h>

int EstructuraGeneralArchivos(int i, float f, char name[], int *puntero) {

	//Declaraci�n de variables locales
	int li = 0, li2 = 1;

	//Impresi�n de resultados y retorno de resultados
	printf("***CAP 1 ESTRUCTURA GENERAL DE ARCHIVOS***");
	printf("N�mero entero %d\n", i);
	printf("N�mero flotante %f.2\n", f);
	printf("N�mero entero %s\n", name);
	printf("N�mero puntero %d\n", *puntero);

	return 0;
}