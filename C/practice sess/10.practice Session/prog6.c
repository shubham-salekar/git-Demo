#include<stdio.h>

void main(){

	int x = 10;
	int y = 20;

	int *xptr = &x;
	int *yptr = &y;

	int temp = *xptr;

	x = *yptr;

	y = temp;

	

	printf("x = %d\n",x);
	printf("y = %d\n",y);



}

