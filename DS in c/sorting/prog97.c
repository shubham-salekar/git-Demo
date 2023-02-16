// sum of array

#include<stdio.h>

int arraysum(int arr1[],int arr2[],int arr3[],int size){

	for(int i=0 ; i<size ; i++){
	
		arr3[i] = arr1[i]+arr2[i];
	}
}
void main(){

	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr1[size];
	int arr2[size];
	int arr3[size];

	printf("Enter array 1 elements\n");
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr1[i]);
	}
	printf("Enter array 2 elements\n");
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr2[i]);
	}

	arraysum(arr1,arr2,arr3,size);

	printf("sum of both array\n");
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",arr3[i]);
	}
	printf("\n");
}
