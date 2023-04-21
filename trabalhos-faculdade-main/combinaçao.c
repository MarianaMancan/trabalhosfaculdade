#include <stdio.h>
int fatorial(int n)
{int i,f=1;
for(i=2;i<n;i++)
	f=f*i;
return f;
}
int combinacao(int n, int p)
{int c;
c= fatorial(n) / fatorial(p) * fatorial(n-p);
return c;
}
main()
{int a,b,comb;           
do{printf("Valor d n: ");
   scanf("%d",&a);
  } while( a<2);
  do{printf(" Valor de p : ");
  	scanf("%d",&b);
    }while ((b<1)||(b>=a));
comb= combinacao(a,b);
printf("\n Combinacao de %d, %d=%d",a,b,comb);
  
  
}
