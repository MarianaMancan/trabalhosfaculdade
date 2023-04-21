#include <stdio.h>

//Escrever uma função recurssiva que retorne somatorio de um numero natural
int somatorio(int n)
{if (n==1)
	return 1;
else return n + somatorio(n-1);
}
main()
{int num;
do{printf("\n Numero: ");
	scanf("%d",&num);
}while(num<0);
printf("O somatorio de %d sera %d",num,somatorio(num));
}
