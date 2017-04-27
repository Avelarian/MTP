#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main (){
	char frase[256];
	int c=0,v=0;
	printf("Digite uma frase:\n");
	fgets(frase,256,stdin);
	for(int i=0;frase[i]!='\0';i++){
		if(isalpha(frase[i]))
			c++;
		if(isdigit(frase[i]))
			v++;
	}
	printf("O número de letras da frase digitada e:\n%d", c);
	printf("\nO numero de numeros na frase e:\n%d", v);
}