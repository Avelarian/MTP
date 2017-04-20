#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void safeFlush() {
	char c;
	while ((c=getchar()) != EOF && c != '\n');
}
void main(){
	srand(time(0));
	int d1=0,d2=0,d3=0,soma=0;
	d1=(rand()%6) + 1;
	d2=(rand()%6) + 1;
	d3=(rand()%6) + 1;
	soma=d1+d2+d3;
	printf("\nO numero dos dados sao:\n");
	printf("\n%d", d1);
	printf("\n%d", d2);
	printf("\n%d", d3);
	printf("\nE a soma e:\n");
	printf("%d", soma);
	if(soma==7 || soma==11)
		printf("\nVoce ganhou!!");
	else
		printf("\nVoce perdeu!!");
}