#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main (){
	unsigned long long int n=0,fat=1,b=0;
	printf("Digite um numero para calculo de seu fatorial:\n");
	scanf("%llu", &n);
	while(b!=n)
	{
		fat=(fat*b)+fat;
		b++;
	}
	printf("O fatorial do numero digitado e:\n%llu", fat);
}