
// rightmax

#include<stdio.h>

void rightmax(int arr[],int size,int rightarr[]){

	rightarr[size-1] = arr[size-1];

	for(int i=size-2 ;i >= 0 ; i--){
	
		int max = arr[i];
		
		if(arr[i] > rightarr[i+1]){
			max = arr[i];

			rightarr[i] = max;
		}else{
		
			rightarr[i] = rightarr[i+1];
		}
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
	int rightarr[size];

	rightmax(arr,size,rightarr);

	printf("rightmax array\n");
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",rightarr[i]);
	}
	printf("\n");
}
