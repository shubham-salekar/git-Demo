
#include<stdio.h>

void fun(int,int,int);

void main(){

	int x = 10;
	int y = 20;
	int z = 30;

	fun(x,y,z);
	fun(x,y);
}

void fun(int x,int y,int z=50){

	printf("add %d\n",x+y+z);
	
}
