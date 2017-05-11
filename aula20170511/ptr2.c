#include <stdio.h>
#include <stdlib.h>
void main(){
	unsigned int vetor[]={0,1,2,4,8}, c=0;
	unsigned char *p;
	p= (unsigned char *) vetor;
	for(int i=0;i<5;i++){ 
		for(int j=0;j<sizeof(vetor[i]);j++)
			if(*((p+i)+j)==0x00)
				c++;
		printf("\nO endereço do elemento %d e: %X", vetor[i], &vetor[i]);
	}
	printf("\n\nO numero de bytes nulos e %d", c );
}

