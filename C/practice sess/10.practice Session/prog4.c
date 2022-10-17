
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
	for(int i = 0;i<size ; i++){
	
		printf("%d ",arr[size-1-i]);
	
	}
}
