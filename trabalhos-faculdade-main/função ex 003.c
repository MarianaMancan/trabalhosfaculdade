#include <stdio.h>
int soma(int vet[10]) {
	int i, soma=0;
	for(i=0; i<10; i++)
		if (vet[i]%2==0)
			soma= soma + vet[i];

	return soma;
}
void le_vetor(int vet1[10]) {
	int i;
	for(i=0; i<10; i++) {
		printf("Digite o %d numero: \n",i);
		scanf("%d", &vet1[i]);

	}
	return ;
}

	

 int main() {
	int x, vet3[10];
	le_vetor(vet3);
	x=soma(vet3);
   printf("soma igual %d",x);


}
