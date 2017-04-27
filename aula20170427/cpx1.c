#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
void main (){
	double complex Y,X,Z;
	float zr, zi, xr, xi, yr, yi;
	printf("Digite a parte real do primeiro numero:\n");
	scanf("%f", &zr);
	printf("Digite a parte imaginaria do primeiro:\n");
	scanf("%f", &zi);
	printf("Digite a parte real do segundo:\n");
	scanf("%f",&xr);
	printf("Digite a parte imaginaria do segundo:\n");
	scanf("%f",&xi);
	X=xr+xi*I;
	Z=zr+zi*I;
	Y=X+Z;
	printf("O resultado da soma dos complexos e %lf + %lf*I\n", creal(Y), cimag(Y));
	printf("\nou igual a %lf < %lf rad\n", cabs(Y), carg(Y));
}
