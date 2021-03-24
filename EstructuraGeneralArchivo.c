/**
#include <stdio.h>

//Definicion de la función
//Estructura V 1-2021-03-24
int function (int a, int b, char s[], int* p){

	//Declaración de variables locales

	//Procedimiento

	//Retorno de resultados

	return 0;
}

*/
#include <stdio.h>

int EstructuraGeneralArchivos(int i, float f, char name[], int *puntero) {

	//Declaración de variables locales
	int li = 0, li2 = 1;

	//Impresión de resultados y retorno de resultados
	printf("***CAP 1 ESTRUCTURA GENERAL DE ARCHIVOS***");
	printf("Número entero %d\n", i);
	printf("Número flotante %f.2\n", f);
	printf("Número entero %s\n", name);
	printf("Número puntero %d\n", *puntero);

	return 0;
}