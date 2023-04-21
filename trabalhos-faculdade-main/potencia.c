#include <stdio.h>
int potencia (int x,int y)
{int i,p;
if(y==0)
	p=1;
else p=x;
for(i=2;i<=y;i++)
	p=p*x;
 return p;
}
main()
{int a,b;
printf("Base: ");
scanf("%d",&a);
do{printf("Expoente : ");
   scanf("%d",&b);
}while(b<0);
printf("\n \n %d elevado a %d = %d",a,b,potencia(a,b));
}
