//print all subarrays and sum of every single subarray

#include<stdio.h>

int print_subArr(int arr[],int size){

	for(int i=0 ; i<size ; i++){
		
		for(int j=i ; j<size ; j++){
			
			int sum = 0;
			for(int k=i ; k<=j ; k++){

				sum = sum + arr[k];
				printf("%d",arr[k]);
			}
			printf(" = %d",sum);
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
	printf("sum of every single  subarrays are\n");
	print_subArr(arr,size);
}
