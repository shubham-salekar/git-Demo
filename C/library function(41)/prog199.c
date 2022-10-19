// string concatenatio using library function.

#include<stdio.h>
#include<string.h>

//char* strcat(char* src,char* dest);

void main(){

	char str1[] = {'s','h','a','s','h','i','\0'};

//	char *str1 = " bagal";

	char str2[20] = "bagal Boss boss boss";

	puts(str1);
	puts(str2);

	printf("str1 len= %ld\n",strlen(str1));
	printf("str2 len = %ld\n",strlen(str2));
	
	printf("str1 size = %ld\n",sizeof(str1));
	printf("str2 size = %ld\n",sizeof(str2));


	strcat(str1,str2);

	printf("strcat size = %ld\n",sizeof(strcat));

	puts(str1);
	puts(str2);

	printf("str1 len = %ld\n",strlen(str1));
	printf("str2 len = %ld\n",strlen(str2));

	printf("str1 size = %ld\n",sizeof(str1));
	printf("str2 size = %ld\n",sizeof(str2));

}
