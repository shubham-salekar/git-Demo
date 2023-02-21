#include<stdio.h>

void mergesort(int arr[],int start,int end){

	static int count = 0;
	count++;
	if(start<end){
	
		int mid= (start+end)/2;
		mergesort(arr,start,mid);
		mergesort(arr,mid+1,end);
	}
	else
		printf("count = %d\n",count);
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

	mergesort(arr,0,size-1);
}
