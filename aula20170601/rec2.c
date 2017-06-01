#include <stdio.h>

int soma(int * A, int * n){
	static int i=0;
	i++;
	if(i<*n){
		
		return *A+soma(A+1,n);
	}
	return *A;
}
int main(){
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
	int N = sizeof(A)/sizeof(int);
	printf("A soma dos numeros desse vetor e: %d", soma(A,&N));
	return 0;
}
