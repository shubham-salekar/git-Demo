
#include<stdio.h>

void main(){

	extern int x; 		// no memory allocation when there is no assigning value

	printf("%p\n",&x);

	printf("%d\n",x);
}

//static int x = 70; 	// do not declare static and extern together

//int x = 80;

