/* tablasDeConversion.c
   Interfaces & Makefile — Temperaturas 
   GRUPO:  
   20180528
*/ 
#include  <stdio.h>
#include "Conversion.h"


int main()
{
	printf("ANTES\n" ) ;
	printTablas();
	printf("DESPUÉS\n" ) ;
	return 0;
} 

void printTablas(){
	printf("\tConversion de grados\n" ) ;
	printf("*************************************\n" ) ;
	printTablaCelsius();
	printTablaFahrenheit();
}

void printTablaCelsius(){
	const int CELSIUS = 1;
	printFilas(CELSIUS);
}

void printTablaFahrenheit(){
	const int FAHRENHEIT = 2;
	printFilas(FAHRENHEIT);
}

void printFilas(int opcion){
	if (opcion == 1){
		printf("Fahrenheit a Centigrados\n" );
		for (int fahr = 0;  fahr <= 300; fahr = fahr + 20 )
			printFila(fahr, celsius(fahr));
	}
	else{
		printf("2.--Centigrados a Fahrenheit\n" );
		for (int celsius = 0;  celsius <= 300; celsius = celsius + 20 )
			printFila(celsius, fahrenheit(celsius));
	}
}

void printFila(int grado, double gradoConvertido){
	printf("%3d%6.1f\n", grado, gradoConvertido);
}

