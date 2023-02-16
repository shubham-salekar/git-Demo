
// insertion sort

#include<stdio.h>

int insertionsort(int arr[],int size){

	for(int i=1 ; i<size ; i++){
	
		int store = arr[i];
		
		int j;
		for( j=i-1 ; j>=0 ; j--){
		
			if(arr[j] > store)
				arr[j+1] = arr[j];
			else
				break;
		}
		arr[j+1] = store;
	}


}
void main(){

	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter array elements\n");
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	printf("unsorted array\n");
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",arr[i]);
	}
	printf("\n");

	insertionsort(arr,size);

	printf("sorted array\n");
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",arr[i]);
	}
	printf("\n");
}
