// reverse array

#include<stdio.h>

void revarray(int arr[],int size){

	int start = 0;
	int end = size-1;

	while(start<end){
	
		int d = arr[start];
		arr[start] = arr[end];
		arr[end] = d;

		start++;
		end--;
	}
}

void main(){

	int size;
	printf("enter array size\n");
	scanf("%d",&size);

	int arr[size];

	printf("enter array elements\n");

	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	revarray(arr,size);
	
	printf("array after reversing in range \n");
	
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",arr[i]);
	}

	printf("\n");
	
}
