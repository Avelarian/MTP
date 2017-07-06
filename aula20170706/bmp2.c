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
    RGB pixel;
    Byte byte; Word word; Dword dword,lixo=0;
    int WPX, HPX, BPP, NCP, NIC;
    FILE * arquivo, * arquivo1;
    arquivo =fopen("Homaranha lego.bmp", "rb");
    if (!arquivo){
        fprintf(stderr, "Arquivo inexistente!\n");
        return EXIT_FAILURE;
    }
    arquivo1=fopen("Desenhod.bmp","wb");
    fread(&byte, sizeof(Byte),1,arquivo);
    fwrite(&byte, sizeof(Byte),1,arquivo1);
    fread(&byte, sizeof(Byte),1,arquivo);
    fwrite(&byte, sizeof(Byte),1,arquivo1);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,arquivo1);
    fread(&word, sizeof(Word),1,arquivo);
    fwrite(&word, sizeof(Word),1,arquivo1);
    fread(&word, sizeof(Word),1,arquivo);
    fwrite(&word, sizeof(Word),1,arquivo1);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,arquivo1);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,arquivo1);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,arquivo1);
    WPX = dword; //largura
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,arquivo1);
    HPX = dword; //Altura
    fread(&word, sizeof(Word),1,arquivo);
    fwrite(&word, sizeof(Word),1,arquivo1);
    fread(&word, sizeof(Word),1,arquivo);
    fwrite(&word, sizeof(Word),1,arquivo1);
    BPP=word;
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,arquivo1);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,arquivo1);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,arquivo1);
    fread(&dword, sizeof(Dword),1,arquivo);
    fwrite(&dword, sizeof(Dword),1,arquivo1);
    fread(&NCP, sizeof(Dword),1,arquivo);
    fwrite(&NCP, sizeof(Dword),1,arquivo1);
    fread(&NIC, sizeof(Dword),1,arquivo);
    fwrite(&NIC, sizeof(Dword),1,arquivo1);
    int PAL, aux, i, j,aux2;
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    aux=PAL-WPX*3;
    for(j=0;j<HPX;j++){
        for(i=0;i<WPX;i++){
            fread(&pixel,sizeof(RGB),1,arquivo);
            aux2=pixel.R;
            pixel.R=pixel.G;
            pixel.G=aux2;
            fwrite(&pixel,sizeof(RGB),1, arquivo1);
        }
        if(aux>0){
            fseek(arquivo, aux, SEEK_CUR);
            for(i=0;i<aux;i++){
                fwrite(&lixo,sizeof(Byte),1,arquivo1);
            }
        }
    }
    fclose(arquivo);
    fclose(arquivo1);
    return EXIT_SUCCESS;
}