/*
Autor:Francisco Jesus Mac Cetzal
Entradas: 2 numeros enteros
Salidas:cual es menor, mayor o si son iguales
Procedimiento general: se ingresa dos numeros enteros y se determina cual es menor, cual es mayo o si son iguales
Ejercicio 2
*/

#include <stdio.h>

int main () {
	int numero1 = 0;
	int numero2 = 0;
	int mayor = 0;
	int menor = 0;
	int igual = 0;
	/*Entradas*/
	scanf("%i", &numero1 );
	scanf(" %i", &numero2 );
	/*Procesos*/
	if(numero1>numero2){
		mayor = numero1;
		menor = numero2;
	} else{
		if(numero1<numero2){
			mayor = numero2;
			menor = numero1;
		} else{
			igual = 1;
		}
	}
	/*Salidas*/
	if(igual==0){
		printf("%s %i \n", "El mayor es ", mayor );
		printf("%s %i \n", "El menor es ", menor );
	} else{
		printf("%s \n", "Son iguales ");
	}
	return 0;
}
