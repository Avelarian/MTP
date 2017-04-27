#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void safeFlush() {
	char c;
	while ((c=getchar()) != EOF && c != '\n');
}
void main(){
	srand(time(0));
	int numero=0,ale=0;
	printf("Digite um numero inteiro e nao negativo:\n");
	scanf("%d", &numero);
	safeFlush();	
	ale=rand()%10;
	numero=numero+ale;
	printf("O numero digitado mais um valor randomico entre 0 e 9 e um numero:\n");
	if(numero%2==0)
		printf("Par!");
	else
		printf("Immpar!");
}
