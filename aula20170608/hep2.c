#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void preenche(float * matriz){
	scanf("%f", &matriz);
}
void transposta(float * matriz,float * t){
	* t=* matriz;
}
//void imprimir(float matriz){
	//for(int i=0;i<l;i++){
	//	for(int j=0;j<c;j++){
			//static int c = 1; c++;
			//printf("%g ", matriz);
		
		//printf("\n");
	//}
	//printf("**** %d\n",c);
//}
void main(){
	float **p,**t;
	float l, c;
	printf("Digite o tamanho da sua matriz:\n");
	scanf("%f %f", &l, &c);
	p=calloc(l,sizeof(float*));
	for(int i=0;i<l;i++){
		p[i]=calloc(c,sizeof(float));
	}
	t=calloc(c,sizeof(float*));
	for(int i=0;i<c;i++){
		t[i]=calloc(l,sizeof(float));
	}
	printf("Preencha a matriz a seguir:\n");
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			scanf("%f", &p[i][j]);
		}
	}
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			transposta(&p[i][j],&t[j][i]);
		}
	}
	printf("A matriz digitada e:\n");
	for(int i=0;i<l;i++){
		for(int j=0;j<c;j++){
			printf("%g ", p[i][j]);
		}
		printf("\n");
	}
	printf("A matriz transposta da colocada e:\n");
	for(int i=0;i<c;i++){
		for(int j=0;j<l;j++){
			printf("%g ", t[i][j]);
		}
		printf("\n");
	}
	printf("*********************\n");
	for(int i=0;i<l;i++){
		free(p[i]);
	}
	free(p);
	for(int i=0;i<c;i++){
		free(t[i]);
	}
	free(t);
}