#include <stdio.h>
float calcular_s(int n)
{
	if(n==1)
		return 1;
	else return (float) 1/n + calcular_s(n-1);
}
main()
{int num;
do{printf("Numero: ");
	scanf("%d",&num);
}while(num<1);
printf("Serie s= %.2f",calcular_s(num));
}
