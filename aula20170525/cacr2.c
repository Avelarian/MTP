#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
struct raizes{
	float x1;
	float x2;
}x;
float delta(float a, float b, float c){
	float delta=0;
	delta=pow(b,2)-4*a*c;
	printf("%g\n", delta);
	return delta;
}
void raiz(float delta, float b, float a){
	float x1=0,x2=0,c=0;
	if(delta>0){
		x.x1=(-b+sqrt(delta))/(2*a);
		x.x2=(-b-sqrt(delta))/(2*a);
	}
	if(delta==0){
		x.x1 = x.x2 = -b/(2*a);
	}
	if(delta<0){
	printf("O polinomio nao assum raizes reais!!");
	}
}
void main(){
	float a, b, c, delta1;
	printf("Digite os coeficientes da equacao do segundo grau:\n");
	scanf("%g %g %g", &a, &b, &c);
	delta1=delta(a,b,c);
	raiz(delta1,b,a);
	printf("As raizes da equacao digitada sao:\n");
	printf("%g %g", x.x1, x.x2);
}