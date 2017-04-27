#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void main (){
	char frase[256];
	printf("Digite uma frase:\n");
	fgets(frase,256,stdin);
	for(int i=0;frase[i]!='\0';i++)
		frase[i]=toupper(frase[i]);
	printf("A frase digitada em letra maiuscula e:\n%s", frase);
}