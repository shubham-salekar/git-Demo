
// reverse an array take input from user.

#include<stdio.h>

void main(){

	int arrsize;
	printf("Enter array size\n");
	scanf("%d",&arrsize);

	int arr[arrsize];

	printf("Enter array elements\n");

	for(int i=0 ; i<arrsize ; i++){
	
		scanf("%d",&arr[i]);
	}
	
	printf("Reverse of an arry is\n");

	for(int i=0 ; i<arrsize/2 ; i++){
	
		int x = arr[i] ;
		
		arr[i] = arr[arrsize-i-1];

		arr[arrsize-i-1] = x;
		
	}
	for(int i=0 ; i<arrsize ; i++){
	
		printf("%d ",arr[i]);
	}
	printf("\n");
}
