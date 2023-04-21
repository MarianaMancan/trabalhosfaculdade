//v. receba uma matriz 3x3, e retorne a soma de todos os valores.
#include <stdio.h>
void le_matriz(int mat[3][3])
{int i,j;
 for(i=0;i<3;i++)
 	for(j=0;j<3;j++){
 		printf("Matriz [%d][%d]: ",i,j);
 		scanf("%d",&mat[i][j]);
	 }
	return;
}
int soma_valores(int mat[3][3])
{int i,j,soma=0;
for(i=0;i<3;i++)
	for(j=0;j<3;j++)
		soma+=mat[i][j];
return soma;	
}
main(){
int mat1[3][3],s;
le_matriz(mat1);
s=soma_valores(mat1);
printf("A soma de todos os valores na matriz sera: %d",s);

}
