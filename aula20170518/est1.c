#include <stdio.h>
#include <math.h>
struct cord {
	double x;
	double y;
}vetor[2];
double soma(double x, double y){
	return x+y;
}
double distancia(double x, double y, double x1, double y1){
	return sqrt(pow((x1-x),2) + pow((y1-y),2));
}
void main (){
	double d, sx=0, sy;
	for(int i=0;i<2;i++){
		printf("Digite as coordenadas (x,y) do ponto %d:\n", i+1);
		scanf("%lf %lf", &vetor[i].x, &vetor[i].y);
	}
	sx=vetor[0].x+vetor[1].x;
	sy=vetor[0].y+vetor[1].y;
	d=distancia(vetor[0].x,vetor[0].y,vetor[1].x,vetor[1].y);
	printf("\nA soma das coordenadas dos pontos dados e: (%lf,%lf)", sx, sy);
	printf("\nA distancia entre os pontos dados e: %lf", d);
}