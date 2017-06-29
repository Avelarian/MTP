#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    char c, texto1[256];
    int i=0;
    FILE * texto= NULL;
    texto = fopen("texto.txt", "w");
    printf("Escreva: '\\' +ENTER para encerrar: \n");
    do {
        c=getchar();
        fputc(toupper(c),texto);
    }while(c!= '\\');
    fclose(texto);
    return 0;
}