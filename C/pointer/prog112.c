
#include<stdio.h>

void main(){

	int arr[] = {10,20,30,40};

	int *ptr = &(arr[1]);

	printf("%p\n",ptr);
	printf("%d\n",*ptr);

	ptr+=2;

	printf("%p\n",ptr);
	printf("%d\n",*ptr);
}
