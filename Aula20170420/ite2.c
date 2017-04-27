#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void safeFlush() {
	char c;
	while ((c=getchar()) != EOF && c != '\n');
}
void main(){
	int numero=0, potencia=0,c=1;
	printf("Digite uma base e uma potencia para calculo:\n");
	scanf("%d %d", &numero, &potencia);
	safeFlush();
	for(int i=0;i<potencia;i++){
		c=c*numero;
	}
	printf("A operacao calculada tem resultado:\n%d", c);
}
