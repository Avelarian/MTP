#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
void chat(){
	int n=0;
	n=rand()%9;
	if(n==0){
		printf("Tudo bem?\n");
	}
	if(n==1){
		printf("Ok\n");
	}
	if(n==2){
		printf("LOL!\n");
	}
	if(n==3){
		printf("Que legal\n");
	}
	if(n==4){
		printf("Fale mais sobre isso\n");
	}
	if(n==5){
		printf("Que chato\n");
	}
	if(n==6){
		printf("Sobre o que quer falar?\n");
	}
	if(n==7){
		printf("Eu não acho...\n");
	}
	if(n==8){
		printf("Ta bom eu aceito\n");
	}
}
void main(){
	srand(time(0));
	int i=0;
	char string[10000], tchau[6]= {'t','c','h','a','u','\0'};
	printf("Bom dia usuario! Eu sou o ChatBo!\n");
	do{
	for(int i=0;i<10000;i++){
		string[i]='0';
	}
	fflush(stdin);
	fgets(string,10000,stdin);
	i=0;
	while(string[i]!=0){
		string[i]=tolower(string[i]);
		i++;
	}
	if(strncmp(string,tchau,5)!=0)
		chat();
	}while(strncmp(string,tchau,5)!=0);
	printf("Tchau! Volte sempre!");
}