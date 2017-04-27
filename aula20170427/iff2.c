#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main (){
	int n=0;
	float s=0;
	printf("Digite um numero inteiro:\n");
	scanf("%d", &n);
	for(int i=0;i<729;i++)
	{
		s=s+(1/(float)n);
	}
	printf("O inverso do numero somado 729 vezes e:\n");
	printf("\n%.2f\n", s);
	printf("\n%.15g\n", s);
}
