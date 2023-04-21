//Escrever uma função recursiva que calcule o valor de a elevado b
#include <stdio.h>
int potencia(int a,int b)
{if(b==0)
	return 1;
else return a * potencia(a,b-1);
}
main()
{int base,exp;
	printf("Base: ");
	scanf("%d",&base);
do{printf("\n Expoente: ");
	scanf("%d",&exp);
}while(exp<0);
printf("\n \n %d elevado a %d = %d",base,exp,potencia(base,exp));
}
