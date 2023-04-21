
#include <stdio.h>
#include <string.h>
main()
{char str1[20],str2[20];
int i;
fflush(stdin);
printf("Palavra: ");
gets(str1);

for(i=0;i<strlen(str1);i++)
	str2[i]=str1[(strlen(str1)-1-i)];
str2[i]='\0';
printf("\n \n Inversa: ");
puts(str2);
if(strcmp(str1,str2)==0){
	printf("\n \n Polindromo!");
}else{
	printf("\n \n Nao e polindromo!");
}
}
