#include <stdio.h>
#include <time.h>

void safeFlush() {
    char c;
    while((c = getchar()) != EOF && c != '\n');
}
void main(){
	float base=0, altura=0, a=0;
	printf("Digite a base e a altura do paralelogramo, respectivamente,\n");
	scanf("%f %f", &base, &altura);
	safeFlush();
	a=base*altura;
	printf("A area desse paralelogramo e: %f", a);
}
