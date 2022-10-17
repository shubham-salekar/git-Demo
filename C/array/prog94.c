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

	int flag = 0;

	for(int i = 0 ; i<size ; i++){
	
		if(arr1[i]%4 ==0 && arr1[i]%5 ==0){
		
			flag = 1 ;
		
		}
	
	}
	if(flag == 1){
	
		printf("found\n");
	}else{
	
		printf("not found\n");
	
	}

	





}
