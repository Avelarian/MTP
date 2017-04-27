#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main (){
	char frase[256];
	int c=0,v=0;
	printf("Digite uma frase:\n");
	fgets(frase,256,stdin);
	for(int i=0;frase[i]!='\0';i++){
		frase[i]=tolower(frase[i]);
	}
	printf("A frase digitada apenas com caracteres minusculos e:\n");
	printf("%s", frase);
}