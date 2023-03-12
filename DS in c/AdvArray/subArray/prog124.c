//maximum subarrays

#include<stdio.h>

int max_subArr(int arr[],int size){

	int maxsum = arr[0];

	for(int i=0 ; i<size ; i++){
	
		int sum = 0;	
		for(int j=i ; j<size ; j++){
			
			printf("%d",arr[j]);

			sum = sum + arr[j];

			if(maxsum < sum)
				maxsum = sum;
		}
		printf("\n");
	}
	printf("max subarray sum = %d\n",maxsum);
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
	
	max_subArr(arr,size);
}
