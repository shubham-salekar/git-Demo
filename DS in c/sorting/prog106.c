
#include<stdio.h>

int hoaressort(int arr[],int start,int end){

	

}

int quicksort(int arr[],int start,int end){

	if(start<end){
	
		int piv = hoaressort(arr,start,end);

		quicksort(arr,0,piv-1);
		quicksort(arr,piv+1,end);
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

	quicksort(arr,0,size-1);

	printf("sorted array\n");
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",arr[i]);
	}
	printf("\n");
}
