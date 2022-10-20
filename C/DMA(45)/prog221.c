
#include<stdio.h>


void main(){

	extern int x;		// memory not allocate only declaration is here.
	printf("%d\n",x);

}

//int x = 80;

//static int x = 50; 		// do not use 2 storage classes for same variable


