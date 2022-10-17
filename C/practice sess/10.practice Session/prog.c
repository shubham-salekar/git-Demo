
#include<stdio.h>

void main(){

	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter array elements:\n");
	for(int i = 0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	
	}
	int  search;
	printf("Enter array element to be scearch\n");
	scanf("%d",&search);

	int flag = 0;

	for(int i = 0 ; i<size ; i++){
	
		if(arr[i] == search){
			
			flag = 1;
			printf("Search element found at index %d\n",i);
			break;
		}
	}
	if(flag == 0){
	
		printf("element not found\n");
	
	}

}
