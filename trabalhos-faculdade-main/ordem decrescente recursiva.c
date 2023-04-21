#include <stdio.h>
int func(int n)
{
	if(n==0)
	printf("fim.");
	else{ printf(" %d", n);
	      func(n-1);
	}
}

main()
{
	int num;

do{printf("numero:");
   scanf("%d", &num);
}while(num<0);
func(num);
}
