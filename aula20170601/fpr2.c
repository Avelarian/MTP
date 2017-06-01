#include <stdio.h>
void c(int vetor[], int vetor1[], int n, int m, int vetor2[100]){
	int i=0, j=0, k=0;
	printf("Os numeros iguais sao:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(vetor[i]==vetor1[j]){
				vetor2[k]=vetor1[j];
				k++;
				printf("|%d| ", vetor[i]);
			}
		}
	}
}
void main(){
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
	int n = sizeof(A)/sizeof(int);
	int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
	int m = sizeof(B)/sizeof(int);
	int vetor[100],i=0;
	c(A,B,n,m,vetor);
}