#include <stdio.h>
#include <math.h>
#define N 5
float media(float vetor[]){
	float m;
	for(int i=0;i<N;i++){
		m=m+vetor[i];
	}
	return m/N;
}
float desvio(float vetor[]){
	float s=0;
	float m1=media(vetor);
	for(int i=0; i<N; i++){
		s += pow((vetor[i] - m1), 2);
	}
	s=(1.0/(N-1))*s;
	return sqrt(s);
}
void main(){
	float vetor[N], m, s;
	printf("Digite 5 numeros para calculo de media e desvio padrao:\n");
	for(int i=0;i<N;i++){
		scanf("%f", &vetor[i]);
	}
	m=media(vetor);
	s=desvio(vetor);
	printf("O valor da media e do desvio padrao e:\n");
	printf("Media: |%g| Desvio: |%g|", m, s);
}