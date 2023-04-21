
#include <stdio.h>
#include <string.h>
main()
{char str1[20],str2[20];
printf("Palavra: ");
gets(str1);
printf("Palavras: ");
gets(str2);
printf("Palavra 1: ");
puts(str1);
printf("Palavra 2 ");
puts(str2);
if(strcmp(str1,str2)>0)
	printf("str1 é maior");
if(strcmp(str1,str2)<0)
	printf("str2 é maior");
else{
	printf("Palavras iguais");
}
}
