#include <stdio.h>
//Escrever uma função recursiva que calcule a seguinte série de s
//s=1-1/2+1/3-1/4+...
float serie(int n)
{if (n==1)
	return 1;
else if (n%2==0)
    return(float)-1/n +serie(n-1);
 else return (float) 1/n +serie (n-1);
}
main()
{int num;
printf("Digite um valor: ");
scanf("%d",&num);
printf("Seria s= %.2f ",serie(num));
	
}
