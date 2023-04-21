#include <stdlib.h>
#include <time.h>
#include <stdio.h>
main()
{int n,i,num,palpite,achou,qtd1=0,qtd2=0,vet[100],inicio,fim,meio,resposta;
//gerando vetor
srand(time(NULL));
num=rand()%100;
//começando o jogo
printf("JOGO DE ADIVINHACAO.VAMOS COMECAR?");
//palpite
printf("\n Qual e o seu palpite? ");
scanf("%d",&palpite);

//comparando palpite

while (palpite!=num)

{

if(palpite>num)
printf("O numero que estou pensando e menor que seu palpite.Tente novamente!");
else if (palpite<num)
    printf("O numero que estou pensando e maior que seu palpite.Tente novamente!");
qtd1++;
printf("\n Qual e o seu palpite? ");
scanf("%d",&palpite);
}

  printf("Parabens,voce acertou em %d tentativas!",qtd1);

//vez do computador
printf("\n Agora e minha vez!");
//lendo numero
printf("\n Pense em um numero de 1 a 100: ");
printf("----------------------\n");

//gerando vetor de 100 posiçoes
for(i=1;i<=100;i++){

vet[i]=i+1;

}
//busca binaria para chute do computador
achou = 1;
inicio = 0;
fim = 100;
meio = (inicio+fim)/2;
			while((resposta != 1) && (inicio <= fim))
	{	printf("\nO computador chutou %d!\n", meio);
		printf("\nDigite 1 se ele acertou, 2 se for menor ou 3 se for maior!\n");
		scanf("%d", &resposta);
		if(resposta == 1)
			{	printf("O computador acertou!\n");
				printf("\n----------------------\n");
			}			
		else if(resposta == 2)
				{	printf("\nO numero e menor!");
					printf("\n----------------------\n");
					fim = meio -1;					
				}
			else
			{	inicio = meio + 1;
				printf("\nO numero e maior!");
				printf("\n----------------------\n");
			}
		meio = (inicio + fim) / 2;
qtd2++;
}
if (achou)
printf ("\n Valor foi encontrado em %d tentativas",n,qtd2);
printf("\n Placar %d x %d",qtd1,qtd2);
if(qtd1<qtd2)
    printf("\n Parabens.Voce ganhou!");
else
	printf("\n O computador ganhou!");


}
