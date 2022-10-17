
#include<stdio.h>
#include<string.h>

void main(){

	char pname[] = {'r','o','h','i','t','\0'};
	char *name = "Virat";

	puts(pname);
	puts(name);

	printf("%ld\n",sizeof(pname));	//6
	printf("%ld\n",sizeof(name));	//8 size of any pointer
	
	printf("%ld\n",strlen(pname));	//5
	printf("%ld\n",strlen(name));	//5
}
