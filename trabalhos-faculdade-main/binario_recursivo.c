#include <stdio.h>
void binario(int decimal)
{
	
	if(decimal == 1){
		printf("%d", 1);
		return;
	}
	
	printf("%d", decimal % 2 );

	binario(decimal/2);
}
int main()
{

int dec;
printf("Digite um numero decimal: ");
scanf("%d",&dec);

binario(dec);

return 0;
}
