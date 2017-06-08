#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float media(float vetor[], float n){
	float m;
	for(int i=0;i<n;i++){
		m=m+vetor[i];
	}
	return m/n;
}
float desvio(float vetor[], float n){
	float s=0;
	float m1=media(vetor,n);
	printf("%f", m1);
	for(int i=0; i<n; i++){
		s += pow((vetor[i] - m1), 2);
	}
	s=(1.0/(n-1))*s;
	return sqrt(s);
}
void main(){
	float n=0, *p;
	printf("Quantos numeros deseja entrar?\n");
	scanf("%f", &n);
	p=calloc(n,sizeof(float));
	printf("\nDigite %g numeros para calculo de media e desvio padrao:\n", n);
	for(int i=0;i<n;i++){
		scanf("%f", &p[i]);
	}
	printf("O valor da media e do desvio padrao e:\n");
	printf("Media: |%g| Desvio: |%g|", media(&p[0],n), desvio(p,n));
	free(p);
}