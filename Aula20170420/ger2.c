#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void safeFlush() {
	char c;
	while ((c=getchar()) != EOF && c != '\n');
}
void main(){
	int numero=0, c=0;
	printf("Digite um numero\n");
	scanf("%d", &numero);
	safeFlsuh();
	for(int i=1;i<numero;i++){
		if(numero%i==0)
			c=c+i;
	}
	if(c==numero)
		printf("O numero e perfeito!!");
	else
		printf("O numero nao e perfeito!!");
}
