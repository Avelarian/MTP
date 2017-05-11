#include <stdio.h>
#include <stdlib.h>
void main(){
	unsigned int vetor[1000], n,c=0;
	srand(time(0));
	for(int i=0;i<1000;i++){
		vetor[i]=rand();
	}
	unsigned char *p;
	p= (unsigned char *) vetor;
	printf("Escolha um numero entre 0 e 255: ");
	scanf("%d", &n);
	for(int i=0;i<sizeof(vetor);i++){
		if(n==p[i]){
			printf("\nO endereço de n = %d e: %X | %x |", n, p+i, p[i]);
			c++;
		}
	}
	printf("\nO numero de vezes que o numero n apareceu foi: %d", c);
}

	 