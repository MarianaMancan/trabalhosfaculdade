//1. Programa que leia matriz 5x5. Leia um número de um linha (0 e 4). Calcular e exibir a soma da linha digitada. Exibir matriz.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
main() 
{ 
setlocale (LC_ALL,"Portuguese");
	int mat[5][5], i, j, soma=0, linha;
	
	// Leitura da Matriz
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			{printf ("Matriz [%d][%d]:", i, j);
			scanf ("%d", &mat[i][j]);
			}
	// Solicitar Linha (aqui não garante que digitaram linha maior que 4)
	do {printf ("\nDigite uma linha de 0 a 4, sendo 0 a primeira linha: ");
		scanf ("%d", &linha);
		} while ((linha<0)|| (linha>4));
	// Soma da linha digitada
	for (i=0;i<5;i++)
		soma = soma+mat[linha][i];
	//Exibição Matriz
	printf ("\n\nMatriz Lida:\n\n");
	for (i=0;i<5;i++)
	{printf ("|");
		for (j=0;j<5;j++)
			printf ("%4d ", mat[i][j]);
		printf ("|\n");
	}
	printf ("\n\nSoma da linha %d = %d", linha, soma);
}
