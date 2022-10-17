
#include<stdio.h>

void main(){

	char carr[] = {'A','B','C','D','E'};

	char *ptr = &carr[2];

	(*ptr)++;

	ptr = ptr+2;

	printf("%c\n",*ptr);

	for(int i = 0; i<5 ; i++){
	
		printf("%c ",carr[i]);
	
	}

	printf("\n");



}
