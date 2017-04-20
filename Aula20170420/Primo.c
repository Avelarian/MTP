#include <stdio.h>
#include <time.h>

void safeFlush() {
	char c;
	while ((c=getchar()) != EOF && c != '\n');
}
int main(){
	int numero=0,c=0;
	printf("Digite um numero para teste de primo\n");
	scanf("%d", &numero);
	safeFlush();
	for(int i=1;i<numero;i++){
		if(numero%i==0)
			c++;
	}
	if(c==1)
		printf("\nO numero e primo!!");
	else
		printf("\nO numero nao e primo!!");
	return 0;
}