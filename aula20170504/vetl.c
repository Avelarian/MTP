#include <stdio.h>
#include <string.h>

void main (){
	srand(time(0));
	unsigned int n=0;
	float m=0;
	long long int vetor[10000];
	printf("Digite o numero para calculo das medias:\n");
	scanf("%d", &n);
	for(int i=0;i<10000;i++){
		vetor[i]=rand()%n+1;
		m=m+vetor[i];
	}
	m=m/10000;
	printf("\nA media dos numeros calculados e: %f", m);
}