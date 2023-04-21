#include <stdio.h>
#include <string.h>
main()
{char frase1[40];char frase2[40];
int tam,tam2;
printf("Digite a primeira frase: ");
gets(frase1);
printf("Digite a outra frase:");
gets(frase2);
tam=strlen(frase1);
tam2=strlen(frase2);
printf("A primeire frase possui %d caracteres ",tam);
printf("A segunda frase possui %d caracteres ",tam2);

}
