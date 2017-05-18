#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#define N 1000
struct cord {
	double x;
	double y;
	double z;
}vetor[N];
double frand(double min, double max){
	return (min + (max-min)*rand()/(float)RAND_MAX);
}
void preenche(int n){
	for(int i=0;i<n;i++){
		vetor[i].x=frand(-10.0,10.0);
		vetor[i].y=frand(-10.0,10.0);
		vetor[i].z=frand(-10.0,10.0);
	}
}
void main(){
	srand(time(0));
	double x=0, y, z,sx=0,sy=0,sz=0;
	int n=0;
	printf("Digite o numero de pontos desejado:\n");
	scanf("%d", &n);
	preenche(n);
	for(int i=0;i<n;i++){
		sx=sx+vetor[i].x;
	}
	for(int i=0;i<n;i++){
		sy=sy+vetor[i].y;
	}
	for(int i=0;i<n;i++){
		sz=sz+vetor[i].z;
	}
	x=(1.0/n)*(sx);
	y=(1.0/n)*(sy);
	z=(1.0/n)*(sz);
	printf("\nLogo o centro de massa de %d ponto(s) aleatorio(s) e: \n(%lf,%lf,%lf) ", n,x,y,z);
}