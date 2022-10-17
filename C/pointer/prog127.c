
#include<stdio.h>

void main(){

	int arr[] = {10,20,30,40,50};

	int *iptr = &(arr[0]);

	int *iptr1 = &(arr[3]);

	printf("%d\n",*iptr);

	(*iptr1)++;

	iptr+=2;
	*iptr = 70;

	for(int i = 0; i<5 ; i++){
	
		printf("%d\n",arr[i]);
	
	}


}
