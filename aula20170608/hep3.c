#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    char c;
    int len=0;
    char * texto= NULL;
    printf("Enscreva: '\\' +ENTER para encerrar: \n");
    do {
        c=getchar();
        len++;
        texto=(char *) realloc(texto, len*sizeof(char));
        texto [len-1] = toupper(c);
    }while(c!= '\\');
    texto[len-1]='\0';
    printf("****************************************\n\n");
    printf("%s", texto);
    free(texto);
    return 0;
}
