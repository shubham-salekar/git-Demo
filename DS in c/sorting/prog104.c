
// quick sort lomoto approach(end element as pivot element)

#include<stdio.h>

int swap(int *ptr1,int *ptr2){

	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

}
int partition(int arr[],int start,int end){

	int pivot = arr[end];

	int itr = start-1;
	for(int i=start ; i<=end ; i++){
	
		if(arr[i] < pivot){
		
			itr++;
			swap(&arr[i],&arr[itr]);
		}
	}
	swap(&arr[itr+1] , &arr[end]);
	return itr+1;
}
int quicksort(int arr[],int start,int end){

	if(start<end){
		
		int piv = partition(arr,start,end);

		quicksort(arr,start,piv-1);
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
