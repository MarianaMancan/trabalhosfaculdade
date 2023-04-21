#include <stdio.h>
#include<string.h>
#include <ctype.h>
main()
{char frase1[40],frase2[40];
int i,j=0;
printf("Frase: ");
gets(frase1);
for(i=0;i<strlen(frase1);i++)
	if(frase[i]!=' ')
	{frase2[j]=frase1[i];
	j++;
	}
//barra '0' é o enter,termina o programa
frase2[j]='\0';
printf("\n \n frase digitada: ");
puts(frase1);
printf("\n \n Frase sem espaço em branco: ");
puts(frase2);
}
   
