#include <stdio.h>
#include <string.h>

void main (){
	srand(time(0));
	unsigned int n=0,vetor[1000],t=0,m=10;
	printf("Digite um numero entre 1 e 1000\n");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		vetor[i]=rand()%10;
	}
	for(int i=0;i<n;i++){
		if(vetor[i]>t)
			t=vetor[i];
	}
	for(int i=0;i<n;i++){
		if(vetor[i]<m)
			m=vetor[i];
	}	
	printf("O valor maximo e minimo do vetor e: %d %d", t, m);
}