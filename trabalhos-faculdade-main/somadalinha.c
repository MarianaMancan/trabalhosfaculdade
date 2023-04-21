#include <stdio.h>
void le_matriz(int m[4][4])
{int i,j;
for(i=0;i<4;i++)
	for(j=0;j<4;j++)
	{printf("Matriz [%d][%d]: ",i,j);
	scanf("%d",&m[i][j]);
	}
return;
} 
voide exibe_matriz(int m[4][4])
{int i,j;
for(i=0;i<4;i++)
	{for(j=0;j<4;j++)
		printf("%3d",m[i][j]);
	printf("\n");
	}
return;
}
int soma_linha(int m[4][4],int l)
{int j;soma=0;
for(j=0;j<4;j++)
	soma=soma+m[l][j];
return soma;
}
main()
{int mat[4][4],linha,sm;
printf("leitura da matriz \n \n");
le_matriz(mat);
do{printf("\n linha: ");
   scanf("%d",&linha);
}while((linha>0)||(linha>3));
sm=soma_linha(mat,linha);
printf("Matriz \n\n");
exibe_matriz(mat);
printf("\n \n soma da linha %d = %d",linha,sm);
}
