// take size of array and elements of array from user and another element from user after peinting of array and check whether the element is found or not found.

#include<stdio.h>

void main(){

	int size;
	printf("Enter size of array:\n");
	scanf("%d",&size);

	int arr1[size];

	printf("Enter array elements\n");

	for(int i = 0 ; i<size ; i++){
	
		scanf("%d",&arr1[i]);
	
	}
	int search;
	printf("enter search elements\n");
	scanf("%d",&search);

	int flag = 0;

	for(int j = 0 ; j<size ; j++){
	
		if(arr1[j] == search){
		
			flag = 1;
		}
	
	}
	if(flag==1){
	
		printf("element found\n");
	}else{
	
		printf("not found\n");
	}





}
