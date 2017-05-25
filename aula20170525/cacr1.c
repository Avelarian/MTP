#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
int primo(int n){
	int v=0;
	for(int i=1;i<=n;i++){
		if(n%i==0)
			v++;
	}
	if(v==2)
		return 1;
	else
		return 0;
}
void main(){
	int N=0, j=0, c=0;
	printf("Digite um numero:\n");
	scanf("%d", &N);
	j=N;
	for(int i=0;i<=N/2;i++,j--){
		if(i+j==N && primo(i) && primo(j)){
			printf ("Esse numero pode ser a soma de: %d + %d = %d\n", i, j, N);
			c++;
		}
	}
	if(c==0){
		printf("O numero digitado nao pode ser expresso pela soma de numeros primos!");
	}
}
