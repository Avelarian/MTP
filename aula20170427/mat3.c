#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main (){
	float n=0, b=0,l=0;
	printf("Digite o numero e a base para caluclo de log:\n");
	scanf("%f %f", &n, &b);
	l=log10(n)/log10(b);
	printf("O log de %f na base %f e:\n%f", n, b, l);
}