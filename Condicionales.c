#include "stdio.h"
//Manejo de bool en c
#include<stdbool.h>

//Estructura V 1-2021-03-24
int Condicionales() {

	//Declaración de variables locales
	//Input
	int minimo = 0;
	int maximo = 100;
	char* nombre = "Paul";

	//Procedimientos
	//Procedimiento 1.1
	int _esVerdad_p11 = 0; //false
	if (minimo > maximo) {
		_esVerdad_p11 = 1; //false
	}
	else {
		_esVerdad_p11 = 0; //true
	}

	//Procedimiento 1.2
	int _esVerdad_p12 = 0; //false
	if (minimo < maximo) {
		_esVerdad_p12 = 1; //false
	}
	else {
		_esVerdad_p12 = 0; //false
	}

	//Procedimiento 1.3
	int _select = 0;
	char* _nombre = nombre;
	switch (_select) {
		case 1:
			_nombre = "Paul Gualambo";
			break;
		case 2:
			_nombre = "Franz Gualambo";
			break;
		case 3:
			_nombre = "Renzo Gualambo";
			break;
		default:
			_nombre = "No hay nombres";
			break;
	}

	//Procedimiento 1.4
	bool _esVerdad = 2 > 4;
	bool _esVerdad1 = 4 > 1;
	bool _esBool = true;
	_esBool = false;

	//Retorno de resultados
	printf("Procedimiento 1.1 %d\n", _esVerdad_p11);
	printf("Procedimiento 1.2 %d\n", _esVerdad_p12);
	printf("Procedimiento 1.3 %s\n", _nombre);
	printf("Procedimiento 1.4 _esVerdad = %d _esVerdad1 = %d\n", _esVerdad, _esVerdad1);

	return 0;
}