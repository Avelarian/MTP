#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
struct Ponto { double x,y; }
ponto[100];
int main(){
	int n,i;
	char nome[100];
	FILE * coordenadas = NULL;
	printf("Qual o nome do seu arquivo?\n");
	fgets(nome,100,stdin);
	printf("\nQuantos pontos deseja cadastrar?\n");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Digite o %dº (x,y) ponto:\n", i+1);
		scanf("%lf %lf", &ponto[i].x, &ponto[i].y);
	}
	coordenadas = fopen(nome,"w");
	for(i=0;i<n;i++){
		fprintf(coordenadas,"%lg\n", ponto[i].x); 
		fprintf(coordenadas,"%lg\n", ponto[i].y); 
	}
	fclose(coordenadas);
	return 0;
}