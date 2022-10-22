
//swapping of integer without using third variable.

#include<stdio.h>

void swappint(int x,int y){

	x = x+y;
	y = x-y;
	x = x-y;

	printf("x = %d\n",x);
	printf("y = %d\n",y);

}
void main(){

	int x = 10;
	int y = 20;

	printf("x = %d\n",x);
	printf("y = %d\n",y);

	swappint(x,y);

}
