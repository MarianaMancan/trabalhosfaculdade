#include <stdio.h>
int fatorial(int n)
{if ((n==1)	||(n==0))
	return 1;
else return n * fatorial(n-1);
}
main()
{int num;
do{printf("NUMERO:");
   scanf("%d",&num);

}while(num<0);
printf("\n fatorial de %d = %d",num,fatorial(num));
}
