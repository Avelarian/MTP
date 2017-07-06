#include <stdio.h>
#include <stdlib.h>
#define MAXCHAR 256
typedef
    struct Ponto {double x, y;}Ponto;

int main() {
    int i, N = 0;
    Ponto * conjunto;
    Ponto teste;
    char nome_arquivo[MAXCHAR];
    FILE * arquivo = NULL;
    printf("Entre com o arquivo (sem espaco): ");
    scanf("%s", nome_arquivo);
    arquivo = fopen(nome_arquivo, "rb");
    if(arquivo == NULL){
        fprintf(stderr,"Arquivo inexistente\n");
        exit(EXIT_FAILURE);
    }
    do{
        if(fread(&teste,sizeof(Ponto),1,arquivo)!= 0){
                N++;
                do {
                    conjunto = (Ponto*) realloc(conjunto, N*sizeof(Ponto));
                } while(!conjunto);
                 conjunto[N-1] = teste;
        }
    }while(!feof(arquivo));
    fclose(arquivo);
    for(i = 0; i < N; i++)
        printf("(%lf, %lf)\n", (conjunto+i)->x, conjunto[i].y);
    free(conjunto);
    return 0;
}