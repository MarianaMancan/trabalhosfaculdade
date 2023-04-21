#include <stdio.h>
int conta_caracteres(char palavra[],int n)
{if(palavra[n]=='\0')
	return 0;
else return 1 + conta_caracteres(palavra,n+1);
}

main()
{char texto[80];
printf("Texto: ");
gets(texto);
printf("\n O texto possui %d caracteres",conta_caracteres(texto,0));
}
