#include <stdio.h>
int mult(int num,int qtd)
{if(qtd==1)
	return num;
else return num + mult (num,qtd-1);
}
main()
{int a,b;
printf("Numero base: ");
scanf("%d",&a);
do{printf("\n Vezes:");
	scanf("%d",&b);
}while(b<1);
printf("%d x %d = %d",a,b,mult(a,b));
}

