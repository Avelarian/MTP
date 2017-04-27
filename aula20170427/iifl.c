#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main (){
	srand(time(0));
	float P=0,A=0;
	int c=0;
	printf("Digite a probabilidade desejada:\n");
	scanf("%f", &P);
	for(int i=0;i<=100;i++)
	{
		A=rand()%101;
		A=A/100;
		if(P>A)
			c++;
	}
	printf("A porcentagem de vezes que sua probabilidade foi maior e:\n");
	printf("%d", c);
}
