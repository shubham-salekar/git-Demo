
#include<stdio.h>
//#include<stdlib.h>

//void* calloc(long unsigned int, long unsigned int);

int* calloc(size_t , size_t);

void main(){

	int *ptr = (int*)calloc(5,sizeof(int));

	for(int i=0 ; i<5 ; i++){
	
		*(ptr+i) = 10+i;
	}
	for(int i=0 ; i<5 ; i++){
	
		printf("%d\n",*(ptr+i));
	}
}
