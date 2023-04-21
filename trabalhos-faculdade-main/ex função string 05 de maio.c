//Escrever um programa que leia string até 80 caracteres e verifique se a frase é um palindromo.
//passos: ler a string (sem sinais de pontuação ou letras acentuadas)
//retirar os espeços (gerar 2 string)
//ler a inversa(gerar 3 string)
//verificar se as strings são iguais
//converter para maiusculo ou minusculo
#include <stdio.h>
#include <string.h>
#include <ctype.h>
main()
{char frase[80],frase2[80],frase3[80];
int i,j=0;
fflush(stdin);
printf("Digite uma frase: ");
gets(frase);
//convertendo para minusculo
for (i=0;i<strlen(frase);i++)
	frase[i]=tolower(frase[i]);
printf("frase convertida para minusculo : ");
puts(frase);
//tirando os espaços
for(i=0;i<strlen(frase);i++)
	if(frase[i]!=' ')
	{frase2[j]=frase[i];
	j++;
	}
//barra '0' é o enter,termina o programa
frase2[j]='\0';
printf("frase sem espacos: ");
puts(frase2);
//ler o inverso da frase
for(i=0;i<strlen(frase2);i++)
    frase3[i]=frase2[(strlen(frase2)-1-i)];
frase3[i]='\0';
printf("frase ao contrario: ");
puts(frase3);
//verificar se a string e igual
if(strcmp(frase2,frase3)==0){
	printf("\n \n Polindromo!");
}else{
	printf("\n \n Nao e polindromo!");
}
}
