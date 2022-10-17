
// wild pointer

#include<stdio.h>

void main(){

	int x = 10 ;

	int *ptr = 0;

//	ptr = &x;

	printf("%p\n",ptr);
	printf("%d\n",*ptr);

}
