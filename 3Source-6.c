/*
Autor:Francisco Jesus Mac Cetzal (3Source)
Entradas:
Salidas:
Procedimiento general:
*/

#include <stdio.h>
	
	int main(int argc, char *argv[]) {
	int catetoA = 0;
	int catetoB = 0;
	float hipotenusa = 0;
	char *resultado = "a";
	int potenciaAB = 0;
	float potenciaC = 0;
	/*Entradas*/
	printf("%s", "ingrese el valor del cateto opuesto ");
	scanf("%i", &catetoA);
	printf("%s", "ingrese el valor del cateto adjasente ");
	scanf("%i", &catetoB);
	printf("%s", "ingrese el valor de la hipotenusa ");
	scanf("%i", &hipotenusa);
	/*Procesos*/
	potenciaAB = (catetoA*catetoA) + (catetoB*catetoB);
	potenciaC = hipotenusa*hipotenusa;
	if(potenciaAB==potenciaC){
		resultado = "cumple con la ecuaccion a^2 + b^2 = c^2";
	}
	else{
		resultado = "no cumple con la ecuaccion a^2 + b^2 = c^2";
	};
	/*Salidas*/
	printf("%s", resultado);
	return 0;
}
