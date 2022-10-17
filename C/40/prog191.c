
#include<stdio.h>
#include<string.h>

void main(){

	char pname[] = {'R','o','h','i','t','\0','v','a','d','a','\0'};
	char *name = "ViratK";

	puts(pname);

	for(int i=0 ; i<7 ; i++){
	
		printf("%c",pname[i]);
	
	}
	printf("\n");

	printf("%ld\n",sizeof(pname));
	printf("%s",name);

	printf("\n");

	for(int i = 0 ; i<11 ; i++){
	
		printf("%c",*(name+i));
	}
	

}
