/*
Autor:Francisco Jesus Mac Cetzal
Entradas:numero entero
Salidas:si el numero es par o no
Procedimiento general: se ingresa un numero entero y se determina si es par o no
Ejercicio 1
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int numero;
	char *resultado;
	/*Entradas*/
	printf("%s", "ingrese un numero\n");
	scanf("%i", &numero );
	/*Procedimiento*/
	if(numero%2!=0){
		resultado = "No es par "; 
	} else{
		resultado = "Es par ";
	}
	/*Salidas*/
	printf("%s \n", resultado );
	return 0;
}

