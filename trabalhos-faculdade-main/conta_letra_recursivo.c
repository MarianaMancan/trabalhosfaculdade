#include <stdio.h>
int conta_letras(char texto[],char letra,int n)
{if(texto[n]=='\0')
	return 0;
else if (texto[n]==letra)
    return 1 + conta_letras(texto,letra,n+1);
else return 0 + conta_letras(texto,letra,n+1);
}

main()
{char texto[80],letra;
printf("Texto: ");
gets(texto);
printf("\n Letra= ");
scanf("%c",&letra);
printf("\n \n O texto possui %d letras %c",conta_letras(texto,letra,0));
}
