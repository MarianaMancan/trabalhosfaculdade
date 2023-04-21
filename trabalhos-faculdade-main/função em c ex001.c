#include <stdio.h>
int maior(int x,int y)
{int m;
if(y>x)
m=y;
else
m=x;
return m;
}
main()
{
 int a,b;
 printf("Digite um valor:");
 scanf("%d",&a);
 printf("Digite outro valor:");
 scanf("%d",&b);
 printf("\n \n O maior numero e: %d",maior(a,b));
}
