#include <stdio.h>
#include <string.h>

void main (){
	int vetor[10],vetor1[10],j=9;
	printf("Digite 10 numeros para preencher o vetor\n");
	for(int i=0;i<10;i++){
		scanf("%d", &vetor[i]);
	}
	for(int i=0;i<10;i++,j--){
		vetor1[j]=vetor[i];
	}
	printf("\nO vetor digitado ao contrario e:\n");
	for(int i=0;i<10;i++){
		printf("%d ", vetor1[i]);
	}
}