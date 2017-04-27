#include <stdio.h>
#include <time.h>

void safeFlush() {
	char c;
	while ((c=getchar()) != EOF && c != '\n');
}
void main(){
	float a=0, b=0, c=0, d=0, e=0, m=0,co=0;
	printf("Digite os valores das notas A, B, C, D e E, respectivamente,\n");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
	safeFlush();
	if(a<0 || a>10 || b<0 || b>10 || c<0 || c>10 || d<0 || d>10 || e<0 || e>10){
		printf("As notas devem estar no intevalo de 0 a 10");
		printf("\nQuer tentar novamente? Se sim digite 1 se nao digite 2\n");
		scanf("%f", &co);
		safeFlush();
		if(co==1)
			main();
		if(co==2)
			printf("\nObrigado por tentar");
	}
	else{
		m=((a*2)+(b*2)+(c*2)+(d*3)+(e*5))/14;
		printf("A media das notas do aluno digitado e: %f", m);
	}
}
