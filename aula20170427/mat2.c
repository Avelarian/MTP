#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main (){
	float b=0,c=0,a=0,A=0;
	printf("Digite o valor de dois lados de um triangulo e do Angulo entre eles em radianos:\n");
	scanf("%f %f %f", &b, &c, &A);
	a=sqrt(pow(b,2)+pow(c,2)-2*b*c*cos(A));
	printf("O outro lado do triangulo por lei dos cossenos e:\n%f", a);
}