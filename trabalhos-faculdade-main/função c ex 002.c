#include <stdio.h>
int par(int x)
{	if (x%2==0)
 		return 1;
 	else
 	return 0;
}
main()
{int y;
printf("Digite um valor: ");
scanf("%d",&y);
if (par)
	printf("PAR");
else
 	printf("IMPAR");
}
