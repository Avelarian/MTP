#include <stdio.h>
struct fracao{
	int q;
	int r;
}f;
struct fracao retorna(int a, int b){
	f.q=a/b;
	f.r=a%b;
	return f;
}
void main(){
	int a, b;
	printf("Digite o valor do numerador e do denominador da sua fracao:\n");
	scanf("%d %d", &a, &b);
	f=retorna(a,b);
	printf("\nO quociente e: %d, e o resto e: %d", f.q,f.r);
}