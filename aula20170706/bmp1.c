#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef unsigned char Byte;//1byte
typedef unsigned short Word;//2 bytes
typedef unsigned int Dword;//4bytes
typedef
    struct RGB{ Byte B, G, R;}
RGB;
int main(){
    FILE * arquivo;
    RGB pixel;
    Byte byte; Word word; Dword dword;
    int WPX, HPX, BPP, NCP, NIC;
    arquivo =fopen("Homaranha.bmp", "rb");
    if (!arquivo){
        fprintf(stderr, "Arquivo inexistente!\n");
        return EXIT_FAILURE;
    }
    fread(&byte, sizeof(Byte),1,arquivo);
    printf("%c", byte);
    fread(&byte, sizeof(Byte),1,arquivo);
    printf("%c\n", byte);
    fread(&dword, sizeof(Dword),1,arquivo);
    printf("Tamanho do arquivo: %d bytes\n", dword);
    fread(&word, sizeof(Word),1,arquivo);
    printf("Info reservada: %d\n", word);
    fread(&word, sizeof(Word),1,arquivo);
    printf("Info reservada: %d\n", word);
    fread(&dword, sizeof(Dword),1,arquivo);
    printf("Offset: %d bytes\n", dword);
    fread(&dword, sizeof(Dword),1,arquivo);
    printf("Cabecalho: %d bytes\n", dword);
    fread(&dword, sizeof(Dword),1,arquivo);
    printf("Largura: %d pixels\n", dword);
    WPX = dword; //largura
    fread(&dword, sizeof(Dword),1,arquivo);
    printf("Altura: %d pixels\n", dword);
    HPX = dword; //Altura
    fread(&word, sizeof(Word),1,arquivo);
    printf("Plano de cores: %d\n", word);
    fread(&word, sizeof(Word),1,arquivo);
    printf("Bits por pixel: %d\n", word);
    BPP=word;
    fread(&dword, sizeof(Dword),1,arquivo);
    printf("Compressao: %d\n", dword);
    fread(&dword, sizeof(Dword),1,arquivo);
    printf("tamanho da imagem: %d\n", dword);
    fread(&dword, sizeof(Dword),1,arquivo);
    printf("Resolução horizontal: %d\n", dword);
    fread(&dword, sizeof(Dword),1,arquivo);
    printf("Resolução vertical: %d\n", dword);
    fread(&NCP, sizeof(Dword),1,arquivo);
    printf("Numero de cores na paleta: %d\n", (NCP==0)? 1<<BPP:NCP);
    fread(&NIC, sizeof(Dword),1,arquivo);
    printf("Numero de cores importantes: %d\n", (NIC==0)? 1<<BPP:NIC);
    int aux, PAL;
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    aux=PAL-WPX*3;
    int i, j;
    for(j=0;j<HPX;j++){
    	for(i=0;i<WPX;i++){
    		fread(&pixel,sizeof(RGB),1,arquivo);
    		printf("%d %d %d\n", pixel.B, pixel.G, pixel.R);
    	}
    	if(aux>0){
    		fseek(arquivo, aux, SEEK_CUR);
    	}
    }
    fclose(arquivo);
    return EXIT_SUCCESS;
}
