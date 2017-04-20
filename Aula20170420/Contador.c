#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void safeFlush() {
	char c;
	while ((c=getchar()) != EOF && c != '\n');
}
void main(){
	char palavra[256];
	int c=0;
	printf("Digite uma palavra para realizar a contagem de letras:\n");
	scanf("%s", palavra);
	safeFlush();
	for(int i=0;palavra[i]!='\0';i++){
		palavra[i];
		c++;
	}
	printf("\nO numero de letras e:\n%d", c);
}
		