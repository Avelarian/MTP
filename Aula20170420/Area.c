#include <stdio.h>
#include <time.h>

void safeFlush() {
	char c;
	while ((c=getchar()) != EOF && c != '\n');
}

void main () {
	float l=0,A=0;
	printf("Bom dia! Digite o lado do quadrado para calculo da area!\n");
	scanf("%f", &l);
	safeFlush();
	A=l*l;
	printf("A area do quadrado e %.2f", A);
}