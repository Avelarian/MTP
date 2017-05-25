#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
int dados(){
	int dado = 0;
	dado=rand()%7;
	return dado;
}
void main(){
	srand(time(0));
	char c;
	int soma=0;
	printf("Aperte Enter para comecar a jogar!!");
	scanf("%c", &c);
	if(c=='\n'){
		for(int i=0;i<5;i++){
			soma=soma+dados();	
		}
		if(soma>=18 && soma<=23){
			printf("VOCE GANHOU!!");
			printf("\nA soma dos dados deu %d", soma);
		}
		else{
			printf("Voce perdeu...");
			printf("\nA soma dos dados deu %d", soma);
		}
	}
}