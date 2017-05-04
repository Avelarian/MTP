#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main (){
	char alfa[100],cifra[100];
	printf("Digite uma frase:\n");
	fgets(alfa,100,stdin);
	alfa[strlen(alfa)-1]='\0';
	for(int i=0; i<100; i++)
	{
		if(isalpha(alfa[i]))
			if((alfa[i] >= 'A' && alfa[i] < 'N') || (alfa[i]>= 'a' && alfa[i]< 'n'))
				cifra[i]=alfa[i]+13;
			else
				cifra[i]=alfa[i]-13;
		else
			cifra[i]=alfa[i];
	}
printf("Mensagem criptografado: \n%s", cifra);
}