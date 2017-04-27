#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void safeFlush() {
	char c;
	while ((c=getchar()) != EOF && c != '\n');
}
void main(){
	int numero=0,c=1;
	printf("Digite um numero para calculo de fatorial\n");
	scanf("%d", &numero);
	safeFlush();
	for(int i=2;i<=numero;i++){
		c=c*i;
	}
	printf("\nO resultado do fatorial desse numero e:\n");
	printf("%d", c);
}
		
