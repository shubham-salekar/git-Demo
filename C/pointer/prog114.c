
#include<stdio.h>

void main(){

	int arr[] = {10,20,30,40,50};

	int *ptr1 = &(arr[0]);
	int *ptr2 = &(arr[3]);

	printf("%d\n",*ptr1);		//10
	printf("%d\n",*ptr2);		//40

	//substaction of pointer
	
	printf("%d\n",*ptr1 - *ptr2);		// -30
	printf("%d\n",*ptr2 - *ptr1);		// 30

//	printf("%d\n",*(ptr1 - ptr2));		//error 
//	printf("%d\n",*(ptr2 - ptr1));
	
	printf("%d\n",ptr1 - ptr2);		//-3
	printf("%d\n",ptr2 - ptr1);		//3

//	printf("%d\n",*ptr1 - ptr2);		// 
	printf("%d\n",ptr1 - *ptr2);		// 


}
