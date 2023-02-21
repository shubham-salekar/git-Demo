
#include<stdio.h>

void recursion(int arr[],int size){

	int start = 0;
	int end = size-1;

	if(start<end){
	
		int mid= (start+end)/2;
		printf("mid = %d\n",mid);
		recursion(arr,mid+1);
	}
	//else
		printf("hello\n");

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

	recursion(arr,size);
}
