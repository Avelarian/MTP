#include <stdio.h>
int mdc (int a, int b){
    if (a==b){
        return a;
    }
    else if (a==0){
        return b;
    }
    else if (a%2==0 && b%2!=0){
        return mdc (a/2, b);
    }
    else if (a%2!=0 && b%2==0){
        return mdc (a, b/2);
    }
    else if (a%2==0 && b%2==0){
        return (2*mdc (a/2, b/2));
    }
    else if (a>b){
        return (mdc (((a-b)/2), b));
    }
    else
        return (mdc (((b-a)/2), a));
}
struct fracao{
	int n;
	int d;
}f[3];
void main(){
	int i=0, mdc1;
	float n , d;
	for(i=0;i<2;i++){
		printf("Digite o numerador e denominador do numero racional:\n");
		scanf("%d %d", &f[i].n, &f[i].d);
	}
	f[2].n=(f[1].d*f[0].n)+(f[1].n*f[0].d);
	f[2].d=(f[0].d*f[1].d);
	mdc1=mdc(f[2].n,f[2].d);
	printf("A soma dos dois numeros racionais digitados e: %d/%d", f[2].n/mdc1,f[2].d/mdc1);
}