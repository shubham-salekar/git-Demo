
// Dangling pointer in DMA

#include<stdio.h>
#include<stdlib.h>

int *ptr = 0;

void dangptr(){

	int *ptr1 = (int*)malloc(sizeof(int));

	*ptr1 = 10;

	ptr = ptr1;

	//free(ptr);

}
void main(){

	dangptr();

	printf("%d\n",*ptr);
}
