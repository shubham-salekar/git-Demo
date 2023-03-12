//kadanes algo

#include<stdio.h>

int print_subArr(int arr[],int size){

	int max = arr[0];
	int sum = 0;

	for(int i=0 ; i<size ; i++){
	
		sum = sum + arr[i];
		
		if(sum<0)
			sum = 0;
		
		if(max< sum)
		max = sum;	
			
	}
	printf("max = %d\n",max);
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
