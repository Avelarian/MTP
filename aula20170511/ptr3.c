#include <stdio.h>
#include <stdlib.h>
void main(){
	unsigned int vetor[] = {0xFF,0xFFFF,0xFFFFFF,0xFFFFFFFF}, c=0;
	unsigned char *p;
	p= (unsigned char *) vetor;
	for(int i=0;i<sizeof(vetor);i++){
		if(*(p+i)==0xFF)
			c++;
		printf("O endereço %d e: %X\n", i, &vetor[i]);
	}
	printf("\nO numero de 0xFF's sao: %d", c);
}