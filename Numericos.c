//https://www.tutorialspoint.com/cprogramming/c_data_types.htm

/**********************************
			TIPOS DE DATOS
			NUMÉRICOS
**********************************/
//short int, unsigned short int	2
//int, unsigned int, long int, unsigned long int	4
//float	4
//double	8
//long double	12
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int Numericos() {
/*****
1.- DECLARACION	
Una variable es un espacio en memoria
<tipo de dato> <nombre de variable> <valor inicial>
<tipo de dato> <nom_var1>,<nom_var1> , <nom_var1>
******/
	int numericoEntero;
	short numericoShort;
	short int numericoShort1;
	long int long1;
	long long2;
	unsigned unsigned1;
	unsigned long unsigned2;

	float numericoFloat;
	double numericoDouble1;
	long double numericoLDouble;


/*****
2.- INICIALIZACION
<tipo de dato> <nombre de variable> <valor inicial>
<tipo de dato> <nom_var1>,<nom_var1> , <nom_var1>
******/
	int tipoEntero0 = 6;
	int octal1 = 07; //Se antepone el cero
	int hexadecimal2 = 0x755A;
	int hexadecimal1 = 0x755BB;

	float float1 = 0.0;
	double double1 = 2.45673132684332165123513;
	long double ldouble = 12e-12;
	long double c = 1.7e308;
	unsigned c1 = 3e9;


	printf("*** CAP 2 TIPOS DE DATOS NUMÉRICOS***\n");
	printf("CHAR_BIT    :   %d\n", CHAR_BIT);
	printf("CHAR_MAX    :   %d\n", CHAR_MAX);
	printf("CHAR_MIN    :   %d\n", CHAR_MIN);
	printf("INT_MAX     :   %d\n", INT_MAX); //limits.h
	printf("INT_MIN     :   %d\n", INT_MIN);
	printf("LONG_MAX    :   %ld\n", (long)LONG_MAX);
	printf("LONG_MIN    :   %ld\n", (long)LONG_MIN);
	printf("SHRT_MAX    :   %d\n", SHRT_MAX);
	printf("SHRT_MIN    :   %d\n", SHRT_MIN);
	printf("UINT_MAX    :   %u\n", (unsigned int)UINT_MAX);
	printf("ULONG_MAX   :   %lu\n", (unsigned long)ULONG_MAX);
	printf("USHRT_MAX   :   %d\n", (unsigned short)USHRT_MAX);

	printf("Storage size for float : %d \n", (int)sizeof(float));
	printf("FLT_MAX     :   %g\n", (float)FLT_MAX);
	printf("FLT_MIN     :   %g\n", (float)FLT_MIN);
	printf("-FLT_MAX    :   %g\n", (float)-FLT_MAX);
	printf("-FLT_MIN    :   %g\n", (float)-FLT_MIN);
	printf("DBL_MAX     :   %g\n", (double)DBL_MAX);
	printf("DBL_MIN     :   %g\n", (double)DBL_MIN);
	printf("-DBL_MAX     :  %g\n", (double)-DBL_MAX);
	printf("Precision value: %d\n", FLT_DIG); //float.h

	printf_s("\nLong double %e", c);
	printf_s("\nLong int %d", c1);

	printf_s("\nDouble double1 %f", double1);

	printf("\nSuma de dos octales: decimal %d + %d = %d octal %o + %o = %o"
		, octal1, 075, (octal1 + 075), octal1, 075, (octal1 + 075));

	printf("\nSuma de dos hexadecimales: decimal %d + %d = %d hexa %x + %x = %x"
		, hexadecimal1, hexadecimal2, (hexadecimal1 + hexadecimal2)
		, hexadecimal1, hexadecimal2, (hexadecimal1 + hexadecimal2)
	);
}