
// Dangling pointer

#include<stdio.h>

int *ptr = 0;

void dangptr();

void main(){

	dangptr();

	printf("%d\n",*ptr);

}
void dangptr(){

	int x = 10;
	ptr = &x;

}
