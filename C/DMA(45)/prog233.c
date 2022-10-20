
#include<stdio.h>
//#include<stdlib.h>

void* calloc(size_t,size_t);
void* realloc(void *ptr , long unsigned int);

void main(){

	int *ptr = (int*)calloc(5,sizeof(int));


	printf("ptr brfore adding values = %p\n",ptr);

	for(int i=0 ; i<5 ; i++){
	
		*(ptr+i) = 10+i;
	}
	for(int i=0 ; i<5 ; i++){
	
		printf("%d ",*(ptr+i));
	}

	printf("\n");

	printf("ptr after adding values = %p\n",ptr);

	int* ptr2 = (int*)realloc(ptr,10);


	printf("ptr2 after realloc = %p\n",ptr2);


	for(int i=0 ; i<10 ; i++){
	
		printf("%d ",*(ptr2+i));
	}

	printf("\n");

	for(int i=0 ; i<10 ; i++){
	
		*(ptr2+i) = 10+i;
	}

	//printf("\n");

	for(int i=0 ; i<10 ; i++){
	
		printf("%d ",*(ptr2+i));
	}

	printf("\n");

	printf("%p\n",ptr2);

	
}
