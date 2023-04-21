#include <stdio.h>
int main()
{int vet[50],n,i,j,aux,qtd=0,achou=0;
//ler o vetor 
for(i=0;i<50;i++)
    {printf("Vetor[%d]",i);
     scanf("%d",&vet[i]);
    }
//Ordenação de vetor utilizando metodo da bolha
for(j=49;j>0;j--)
    for(i=0;i<j;i++)
        if(vet[i]>vet[i+1])
            {aux=vet[i];
            vet[i]=vet[i+1];
            vet[i+1]=aux;
            }
//ler o valor n 
printf("\n \n Digite um valor: ");
scanf("%d",&n);
//Verificar se o valor n está no vetor
i=0;
while((vet[i]<=n)&&(i<50))
{if(vet[i]==n)
    achou=1;
    qtd++;
    i++;
}
//exibiçoes
if(achou)
    printf("O valor %d foi localizado no vetor",n);
else printf("Valor não localizado");
