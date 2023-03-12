//print all subarrays

#include<stdio.h>

int print_subArr(int arr[],int size){

	for(int i=0 ; i<size ; i++){
		
		for(int j=i ; j<size ; j++){
	
			for(int k=i ; k<=j ; k++){

				printf("%d",arr[k]);
			}
			printf("\n");
		}
		
		
	}
}
void main(){

	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);

	int arr[size];

	printf("enter elements\n");
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	printf("all subarrays are\n");
	print_subArr(arr,size);
}
