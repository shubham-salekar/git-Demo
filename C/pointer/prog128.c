
// Dangling pointer(part1)

#include<stdio.h>

int a = 10;
int b;
int *iptr = 0;    	//null ptr

void fun(){

	int x = 30;

	printf("%d\n",a);
	printf("%d\n",b);

	iptr = &x ; 

	printf("%p\n",iptr);
	printf("%d\n",*iptr);

	
}

void main(){

	int y = 40;

	printf("%d\n",a);
	printf("%d\n",b);

	fun();

	//Dangling pointer 		// fun chi stack fram fun che kam complete jhalyavr pop jhali tari iptr ne thevlela x cha address ahe tasach ahe
					// ani nantar pan access hotay thats called dangling ptr.
	
	printf("%p\n",iptr);
	printf("%d\n",*iptr);
	


}
