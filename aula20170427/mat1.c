#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main (){
	float x=0,y=0,x1=0,y1=0,d=0;
	printf("Digite o valor das coordenadas de dois pontos para calculo de distancia:\n");
	scanf("%f %f %f %f", &x, &y, &x1, &y1);
	d=sqrt(pow(x1-x,2)+pow(y1-y,2));
	printf("A distancia e:\n%f", d);
}