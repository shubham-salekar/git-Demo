
#include<stdio.h>

void fun();
void gun();

void main(){

	extern int x;
	gun();
	fun();
	printf("x = %d\n",x);
}

