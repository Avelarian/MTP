#include <stdio.h>
void dividir(int n, int d, int vetor[]){
	printf("Digite o valor do numerador e denominador da fracao:\n");
	scanf("%d %d", &n, &d);
	vetor[0]=n/d;
	vetor[1]=n%d;
}
void main(){
	int n=0, d=0, vetor[2];
	dividir(n,d,vetor);
	printf("O quociente da divisao e resto sao: |%d| |%d|", vetor[0], vetor[1]);
}