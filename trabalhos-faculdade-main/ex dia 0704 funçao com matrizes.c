#include <stdio.h>
void le_vetor(int vet[20])
{int i;
for(i=0;i<20;i++)
	{ printf("Vetor[%d]: ",i);
	scanf("%d",&vet[i]);
	}
return;
}



void exibe_vetor(int vet[20])
{int i;
for(i=0;i<20;i++)
	printf("%d", vet[i]);
return;
}


int verifica (int vet[20],int x)
{int i,qtd=0;
for(i=0;i<20;i++)
	if(vet[i]%x ==0)
		qtd++;
return qtd;
}
main()
{int vetor[20],n;
printf("Leitura do vetor \n \n");
le_vetor(vetor);
printf("\n Valor de n: ");
scanf("%d",&n);
printf( "\n \n Qtd de mumeros do vetor divididos por %d = %d", n, verifica( vetor,n));

}
