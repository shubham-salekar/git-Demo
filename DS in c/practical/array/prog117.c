
// leftmax

#include<stdio.h>

void leftmax(int arr[],int size,int leftarr[]){

	for(int i=0 ;i<size ; i++){
	
		int max = arr[i];
		for(int j=0 ; j<=i ; j++){
		
			if(arr[j] > max)
				max = arr[j];
		}
		leftarr[i] = max;
	}
}

void main(){

	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];
	printf("Enter aray elements\n");

	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	int leftarr[size];

	leftmax(arr,size,leftarr);

	printf("Leftmax array\n");
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",leftarr[i]);
	}
	printf("\n");
}
