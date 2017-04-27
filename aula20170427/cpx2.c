#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
void main (){
	double complex Z, Zc,Zr;
	float zr,zi,zre,zrei;
	printf("Digite a parte real e imaginaria de um numero complexo:\n");
	scanf("%f %f", &zr, &zi);
	zr=zr*zr;
	zi=zi*zi;
	zre=zi+zr;
	printf("O resultado da multiplicacao e:\n%f", zre);
}

