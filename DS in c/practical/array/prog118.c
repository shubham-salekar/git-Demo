
// leftmax

#include<stdio.h>

void leftmax(int arr[],int size,int leftarr[]){

	leftarr[0] = arr[0];

	for(int i=1 ;i<size ; i++){
			
		if(arr[i] > leftarr[i-1]){
			
			leftarr[i] = arr[i];
		}else
			leftarr[i] = leftarr[i-1];
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
