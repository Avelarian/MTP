#include <stdio.h>
#include <stdlib.h>
void main(){
	float x, y, z;
	printf("Digite 2 numeros reais: ");
	scanf("%f %f", &x, &y);
	printf("\nO endereço do numero %f e: %X", x, &x );
	printf("\nO endereço do numero %f e: %X", y, &y );
	z=x+y;
	printf("\n\nO resultado da soma desses numeros e: %f e seu endereco: %X", z, &z);
}