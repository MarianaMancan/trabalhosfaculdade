//escrever uma funçao recursiva que exiba a soma dos numeros pares de um determinado numero de elementos de um vetor
#include <stdio.h>
int somapar(int vet[],int i){
if (i==0)
	{
     	if (vet[i]%2==0)
		  return vet[i];
	    else return 0;
    }
else if (vet[i]%2==0)
    	return vet[i] + somapar(vet,i-1);
else  return 0+ somapar(vet,i-1);
}
main(){
	int vet[100], i, num;
	do{printf("Digite um numero:");
	   scanf("%d",&num);
	}while(num<0);
for(i=0;i<num;i++){
		printf("Vetor[%d]:",i);
		scanf("%d",&vet[i]);
	}
	printf("A soma dos elementos pares %d",somapar(vet,num));
}
