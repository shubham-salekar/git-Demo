
#include<stdio.h>

void main(){

	int arr[] = {10,20,30,40};

	int *ptr1 = &(arr[0]);
	int *ptr2 = &(arr[1]);

	int x = ptr1 - ptr2;

	printf("%d\n",x);

	printf("%p\n",ptr1);
	printf("%p\n",ptr1 + 1);
	printf("%d\n",*(ptr1 +1));

	printf("%p\n",ptr1);
	printf("%p\n",1 + ptr1);
	printf("%d\n",*(1 + ptr1));

}
