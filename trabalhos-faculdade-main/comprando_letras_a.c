#include <stdio.h>
#include<string.h>
main()
{int i, qtd=0;
char frase [40];
fflush(stdin);
printf("Digite uma frase: ");
gets(frase);
for(i=0;i<strlen(frase);i++)
	if(frase[i]=='a')
		qtd++;
	printf("\n \n A frase possui %d letras a",qtd);
}
