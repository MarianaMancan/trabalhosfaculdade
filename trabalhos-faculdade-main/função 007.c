#include <stdio.h>
void le_matriz (int mat[3][3]) {
	int i,j;
	for(i=0; i<3; i++)
		for(j=0; j<3; j++) {
			printf("matriz [%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	return;
}
void exibe_matriz(int mat[3][3]) {
	int i,j;
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++)
			printf("%3d",mat[i][j]);
		printf("\n");
	}
	return;
}
void soma_matrizes(int mat1[3][3],int mat2[3][3],int mat3[3][3]) {
	int i,j;
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
			mat3[i][j]= mat1[i][j] +mat2[i][j];
	return;
}
int main() {
	int matA[3][3], matB[3][3], matC[3][3];
	printf("Leitura da matriz 1: \n \n");
	le_matriz(matA);
	printf("\n \n Leitura da matriz 2 \n \n");
	le_matriz(matB);
	soma_matrizes(matA,matB,matC);
	printf("\n \n Matriz 1 \n \n");
	exibe_matriz(matA);
	printf("\n \n Matriz 2\n \n");
	exibe_matriz(matB);
	printf("\n \n Matriz 3\n \n");
	exibe_matriz(matC);
}
