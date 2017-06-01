#include <stdio.h>
void imprimeinvertido(char * frase){
	if(*frase != '\0')
		imprimeinvertido(frase +1);
	printf("%c", *frase);
}
int main(){
	char frase[1024];
	printf("Entre com uma frase: ");
	fgets(frase,1024,stdin);
	imprimeinvertido(frase);
	return 0;
}