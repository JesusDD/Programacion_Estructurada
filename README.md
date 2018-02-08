# Programacion_Estructurada


/*	Autor:Francisco Jesus Mac Cetzal 30/Enero/18
	Entradas: tres numeros 
	Salidas:si pertenece o no a la eccuacion de pitagoras
	Procedimiento general: Escribir el programa para un programa en C que reciba tres números
	enteros que representan dos catetos y una hipotenusa y que determine si
	cumple con la ecuación de pitágoras.
	a^2 +b^2 = c^2
*/


#include <stdio.h>
float pot(float *,float );


int main(int argc, char *argv[]) {
	float catetoA = 0;
	float catetoB = 0;
	float hipotenusa = 0;
	float potenciaA = 0;
	float potenciaB = 0;
	float potenciaC = 0;
	printf("%s", "ingrese el valor del cateto opuesto ");
	scanf("%f", &catetoA);
	printf("%s", "ingrese el valor del cateto adjacente ");
	scanf("%f", &catetoB);
	printf("%s", "ingrese el valor de la hipotenusa ");
	scanf("%f", &hipotenusa);
	potenciaA = pot(&catetoA, 2);
	potenciaB = pot(&catetoB, 2);
	potenciaC = pot(&hipotenusa, 2);
	return 0;
}
/**/
float pot(float base,float n){
	float aumento = 1;
	int i = 0;
	for(i = 0; i<=n;++i){
		aumento = aumento * base;
	}
	return aumento;
}
