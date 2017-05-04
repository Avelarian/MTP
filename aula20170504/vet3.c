#include <stdio.h>
#include <string.h>

void main (){
	int vetor[10], s=0, p=1;
	printf("Digite 10 numeros:\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d", &vetor[i]);
	}
	for(int i=0;i<10;i++){
		s=s+vetor[i];
		p=p*vetor[i];
	}
	printf("\nO somatorio dos numeros digitados e: %d", s);
	printf("\nO produtorio dos numeros digitados e: %d", p);
}