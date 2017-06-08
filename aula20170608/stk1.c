#include <stdio.h>
int main(){
	float matriz[2][4], t[4][2];
	printf("Preencha a matriz a seguir:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			scanf("%f", &matriz[i][j]);
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			t[j][i]=matriz[i][j];
		}
	}
	printf("A matriz digitada e:\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			printf("%g ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("A matriz transposta da colocada e:\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<2;j++){
			printf("%g ", t[i][j]);
		}
		printf("\n");
	}
	return 0;
}