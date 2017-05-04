#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main (){
	char f[100],b[8]={'B','O','M',' ','D','I','A'};
	int c=0,c2=0;
	printf("Digite uma frase:\n");
	fgets(f,100,stdin);
	f[strlen(f)-1]='\0';
	for(int i=0;f[i]!='\0';i++)
		f[i]=toupper(f[i]);
	//if(f[0]=='B' && f[1]=='O' && f[2]=='M' && f[3]==' ' && f[4]=='D' && f[5]=='I' && f[6]=='A')
	for(int i=0;i<7;i++)
		if(f[i]==b[i])
			c++;
	if(c==7)
	{
		printf("\nBom dia para voce tambem!!\n");
	}
	else 
	{
		printf("\nVoce quer dizer: %s?", f);
	}
	for(int i=0;f[i]!='\0';i++){
		c2++;
	}
	printf("\nO tamanho da sua frase e: %d", c2-1);
}