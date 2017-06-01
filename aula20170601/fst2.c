#include <stdio.h>
struct fracao{
	float n;
	float d;
}f[3];
void main(){
	int i=0;
	float n , d;
	for(i=0;i<2;i++){
		printf("Digite o numerador e denominador do numero racional:\n");
		scanf("%f %f", &f[i].n, &f[i].d);
	}
	f[2].n=(f[1].d*f[0].n)+(f[1].n*f[0].d);
	f[2].d=(f[0].d*f[1].d);
	printf("A soma dos dois numeros racionais digitados e: %g/%g", f[2].n,f[2].d);
}