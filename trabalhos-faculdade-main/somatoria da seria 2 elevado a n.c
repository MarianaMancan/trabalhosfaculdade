//escrever uma funçao recursiva que calcule a seguinte serie: s= 2-4+8-16+...
#include <stdio.h>
#include <math.h>
int calcular_s(int n){
	if(n==1)
	return 2;
	else if(n%2==0)
	return -pow(2,n)+calcular_s(n-1);
	else return pow(2,n)+calcular_s(n-1);
}
main(){

int num;
do{printf("Digite um numero: \n");
	scanf("%d",&num);
}while(num<0);

printf("A soma sera %d",calcular_s(num));

}
