#include <stdio.h>
#include <time.h>
#include <math.h>

void safeFlush() {
	char c;
	while ((c=getchar()) != EOF && c != '\n');
}
void main(){
	int numero=0;
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	safeFlush();
	if(numero%2==0)
		printf("\nO numero e par!");
	if(numero%2!=0)
		printf("\nO numero e impar!");
	if(numero%3==0)
		printf("\nO numero e multiplo de 3");
	if(numero%5==0)
		printf("\nO numero e multiplo de 5");
	if(numero%7==0)
		printf("\nO numero e multiplo de 7");
}
