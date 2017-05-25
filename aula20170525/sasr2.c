#include <stdio.h>
int n=0;
void par(){
	for(int i=0;i<n;i++){
		if(i%2==0){
			printf("|%d| ", i);
		}
	}
}
void impar(){
	for(int i=0;i<n;i++){
		if(i%2!=0){
			printf("|%d| ", i);
		}
	}
}
void main(){
	printf("Digite um numero:\n");
	scanf("%d", &n);
	printf("Os numeros pares de 0 ate o numero %d sao:\n", n);
	par(n);
	printf("\nOs numeros impares de 1 ate o numero %d sao:\n", n);
	impar(n);
}