
#include<stdio.h>

int val;

int* fun(int x,int y){

	printf("%d\n",x+y);
//	int val;			// jar variable function chya aat declare kela tar tyacha address return karaycha nahi

	val = x+y;
	printf("%p\n",&val);

	return &val;
}
void main(){

	int *ptr = fun(10,20);
	printf("%p\n",ptr);
	printf("%d\n",*ptr);
}
