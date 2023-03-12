//sum of every single subarray in prefix sum format

// incomplete

#include<stdio.h>

int sum_subArr(int arr[],int size){

	int psum[size];

	psum[0] = arr[0];

	for(int i=1 ; i<size ; i++){

		psum[i] = psum[i-1] + arr[i];
	}
	for(int i=0 ; i<size ; i++){
	
		for(int j=i ; j<size ; j++){
		

			if(i=0)
				sum = psum[i];
			else
				sum = psum[i] - psum[i-1];

			printf("%d\n",sum);
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
	sum_subArr(arr,size);
}
