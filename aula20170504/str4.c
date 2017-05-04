#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main (){
	char frase[100];
	printf("Digite uma frase:\n");
	fgets(frase,100,stdin);
	for(int i=0;frase[i]!='\0';i++)
	{
		frase[i]=toupper(frase[i]);
	}
	for(int i=0;i<100;i++)
	{
		if(frase[i]=='A')
			frase[i]='4';
		if(frase[i]=='E')
			frase[i]='3';
		if(frase[i]=='I')
			frase[i]='1';
		if(frase[i]=='O')
			frase[i]='0';
		if(frase[i]=='S')
			frase[i]='5';
		if(frase[i]=='G')
			frase[i]='6';
	}

	printf("A frase internetizada e:\n%s", frase);
}