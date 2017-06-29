#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void capturar(char nome[100], float * idade, float * altura){
	char c;
	printf("\nDigite seu nome: \n");
	fgets(nome, 100,stdin);
	printf("Digite sua idade:\n");
	scanf("%g", idade); while(!(c=getchar()));
	printf("Digite sua altura:\n");
	scanf("%g", altura); while(!(c=getchar()));
}
void gravar(char nome[100], float * idade, float * altura){
	FILE * arquivo =NULL;
	arquivo = fopen("info.txt", "a");
	fputs(nome, arquivo);
	fprintf(arquivo, "%g\n", *idade);
	fprintf(arquivo, "%g\n", *altura);
	fclose(arquivo);
}
void visualizar(){
	char nome[100];
	float idade, altura;
	FILE * arquivo = NULL;
	arquivo = fopen("info.txt", "r");
	printf("Os nome(s), idade(s) e altura(s) cadastrados e(sao):\n");
	while(!(feof(arquivo))){
		if(arquivo!=NULL){
			fgets(nome,100,arquivo); //printf("%s",nome);
			fscanf(arquivo,"%g", &idade); 
			fscanf(arquivo,"%g", &altura); fgetc(arquivo);
			printf("%s", nome);
			printf("%g\n", idade);
			printf("%g\n", altura);
		}
	}
	fclose(arquivo);	
}
void menu (char nome[100], float * idade, float * altura){
	int opc=0;
	char c;
	do{
	printf("Bom dia! O que deseja fazer?\n");
	printf("1 - Gravar\n");
	printf("2 - Visualizar\n");
	printf("3 - Sair\n");
	printf("4 - Apagar dados\n");
	scanf("%d", &opc); while(!(c=getchar()));
	if(opc==1){
		capturar(nome,idade,altura); gravar(nome,idade,altura);
	}
	if(opc==2){
		visualizar();
	}
	if(opc==3){
		exit(0);
	}
	if(opc==4){
		remove("info.txt");
	}
	}while(opc!=1 || opc!=2 || opc!=3 || opc!=4);
}
int main(){
	char nome[100];
	float idade, altura;
	menu(nome,&idade,&altura);
	return 0;
}
