
#include<stdio.h>
//#include<stdlib.h>

int* malloc(long unsigned int);

int mallocAdd();

void main(){

	int x = mallocAdd();
	printf("%d\n",x);

}
int mallocAdd(){

	int *ptr1 = (int*)malloc(sizeof(int));
	
	int *vptr = malloc(sizeof(int));
	int *ptr2 = (int*)vptr;

	printf("%d\n",*ptr1);
	printf("%d\n",*ptr2);
	
	*ptr1 = 50;
	*ptr2 = 40;

	return *ptr1 + *ptr2;
}
