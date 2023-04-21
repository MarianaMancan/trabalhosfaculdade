//iv. receba um vetor de 10 posições de inteiros e o retorne ordenados em ordem crescente.
#include <stdio.h>
void le_vetor(int vet[10]){
	int i;
	for(i=0;i<10;i++){
		printf("Digite o %d numero: \n",i);
		scanf("%d",&vet[i]);
	}
	return;
}
void ordena_vetor(int vet[10]){
	int i,j,aux;
	for(j=9;j>0;j--)
		for(i=0;i<j;i++)
			if(vet[i]>vet[i+1]){
				aux=vet[i];
				vet[i]=vet[i+1];
				vet[i+1]=aux;
			}
    return;
}
void exibe_vetor(int vet[10]){
	int i;
	for(i=0;i<10;i++){
		  printf("Vetor[%d]: %d \n", i, vet[i]); 
                         }
        return;
	}
//função main
main(){
 int vet1[10];
 le_vetor(vet1);
 ordena_vetor(vet1);
 printf("Vetor ordenado: ");
 exibe_vetor(vet1);
}
