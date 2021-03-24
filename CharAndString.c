#include<stdio.h> 
#include<string.h>

//https://www.javatpoint.com/c-string-functions
void pintarLasLetras(char* c);

int CharAndString() {

	//Declaración de variables locales
	char* c = "Paul gualambo giraldo";
	char nombre[20] = "Paul Romualdo";
	//Procedimiento

	//Retorno de resultados


	//pintarLasLetras(c);
	printf("Tamaño de la cadena es %d \n\r", (int)strlen(c));

	//we can assign the set of characters to the string 
	c = "Franz Gualambo Giraldo";
	pintarLasLetras(c);

	return 0;
}

void pintarLasLetras(char* c) {
	int count = 0;
	while (*(c + count) != NULL) {
		printf("La letra %c \n\r", *(c + count++));
	}

	return;
}