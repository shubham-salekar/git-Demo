
#include<stdio.h>

void main(){

	char pname[] = {'r','o','h','i','t','s','\0'};
	char *name = "Virat";

	for(int i=0 ; i<7 ; i++){
	
		printf("%c",pname[i]);
	}
	printf("\n");

	for(int i=0 ; i<7 ; i++){
	
		//printf("%c",name[i]);
		printf("%c",*(name+i));

	}

}
