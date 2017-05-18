#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
void main(){
	float r,g,b,y,cb,cr,r1,g2,b3;
	printf("Digite o valor da componente R' G' e B':\n");
	scanf("%f %f %f", &r1, &g2, &b3);
	r=r1/255;
	g=g2/255;
	b=b3/255;
	y=16 + (65.481*r + 128.553*g + 24.996*b);
	cb=128 + (-37.797*r - 74.203*g + 112.0*b);
	cr=128 + (112*r - 93.786*g - 18.214*b);
	printf("Os valores Y'CbCr e:\n|%.1f| |%.1f| |%.1f|", round(y), round(cb), round(cr));
}