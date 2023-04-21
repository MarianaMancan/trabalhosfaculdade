void le_vetor(int vetor[20])
{int i;
for(i=0;i<20;i++)
{printf ("vetor[%d]: ",i);
scanf("%d",&vetor[i]);
}
return;
}
void exibe_vetor(int vetor[20])
{int i;
for(i=0;i<20;i++)
	printf("%d",vetor[i]);
return;
}
void inverte(int vetor[20])
{int i,j,aux;
j=19;
for(i=0;i<10;i++)
{aux=vetor[i];
vetor[i]=vetor[j];
vetor[j]=aux;
j--;
}
}

main()
{int vet[20];
printf("leitura do vetor \n \n");
le_vetor(vet);
printf("\n \n vetor lido: ");
exibe_vetor(vet);
inverte(vet);
printf(" \n \n vetor invertido: ");
exibe_vetor(vet);
}
