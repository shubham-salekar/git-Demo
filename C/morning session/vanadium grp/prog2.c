
#include<stdio.h>

int other(){

	int value;
	printf("enter a value:\n");
	scanf("%d",&value);

	int *ptr = &value;

	return *ptr;
}
void main(){

	other(int);
	printf("Value in another func is:%d\n",*ptr);
}
