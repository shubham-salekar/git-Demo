// introducing dangerous function(gets) and puts.

#include<stdio.h>

void main(){

	char name[20];

	printf("Enter name\n");
	
	gets(name);
	puts(name);

	printf("%s\n",name);

}
