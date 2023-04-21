#include <stdio.h>
#include<string.h>
#include <ctype.h>
main()
{int i;
char frase [40];
fflush(stdin);
printf("Digite uma frase: ");
gets(frase);
for(i=0;i<strlen(frase);i++)
	frase[i]=tolower(frase[i]);
    printf("\n \n Frase convertida para minusculo: ");
    puts(frase);
}        
