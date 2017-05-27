#include <stdio.h>
union uniao{
	int x;
	float y;
}uniao;
int main(void) {
	int e=0, n=0;
	float n1=0;
	printf("Voce deseja entrar com um numero inteiro(1) ou flutuante(2)?\n");
	scanf("%d", &e);
	if(e==1){
		printf("\nDigite seu numero: ");
		scanf("%d", &n);
		uniao.x = n;
		printf("\nSeu numero em ponto flutuante e: %f", uniao.y);
	}
	if(e==2){
		printf("\nDigite seu numero: ");
		scanf("%f", &n1);
		uniao.y=n1;
		printf("\nSeu numero em inteiro e: %d", uniao.x);
	}
	return 0;
}
