#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main (){
	char f[100],c[100];
	int j=0,k=1;
	printf("Digite uma frase:\n");
	fgets(f,100,stdin);
	if(f[0]==' '){
		for(int i=0;f[i]!='\0';i++)
		{			
			if(f[i]==' ' && f[i+1]!=' '){
				c[j]=f[i+1];
				j++;			
			}

		}
	}
	else{
		c[0]=f[0];
		for(int i=0;f[i]!='\0';i++)
		{
				if(f[i]==' ' && f[i+1]!=' '){
				c[k]=f[i+1];
				k++;			
			}
		}
	}
	for(int i=0;c[i]!='\0';i++)
	{
		c[i]=toupper(c[i]);
	}
	printf("Sua mensagem criptografada e:\n%s", c);
}
