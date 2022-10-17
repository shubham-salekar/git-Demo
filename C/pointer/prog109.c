
#include<stdio.h>

void main(){

	int x = 10;
	int y = 20;

	int *ptr1 = &x;

	printf("%d\n",*ptr1);		//10

	printf("%d\n", *ptr1 + 1);  	// 11 = 10+1;
	
	printf("%d\n", *(ptr1 + 1));	//20 = *(ptr1 + 1)
					//   = valueat(ptr1 + 1 * size of pointer's datatype (i.e (int)))
}					//   = valueat (ptr1 + 4)
