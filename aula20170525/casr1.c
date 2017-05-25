#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
int sort(){
	int s=0;
	s=(rand()%10)+1;
	return s;
}
void main(){
	srand(time(0));
	int n=0, s=0;
	char c;
	do{
		printf("Digite um numero entre 1 e 10:\n");
		scanf("%d", &n);
	}while(n<1 || n>10);
	printf("Aperte Enter para começar os sorteios:\n");
	for(int i=0;i<10;i++){
		s=sort();
		getchar();
			if(n==s)
				printf("Parabens!! Seu numero %d foi sorteado", s);
			else
				printf("Desculpe, seu numero %d nao foi sorteado, o sorteado foi %d", n, s);
	}
}