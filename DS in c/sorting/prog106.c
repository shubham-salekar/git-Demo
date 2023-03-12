
// quick sort: hoares approach(first element is pivot)

#include<stdio.h>

int hoaressort(int arr[],int start,int end){

	int pivot = arr[start];

	int i = start-1;
	int j = end+1;

	while(1){
	
		do{
			i++;

		}while(arr[i] < pivot);

		do{
			j--;

		}while(arr[j] > pivot);

		if(i>=j){
			return j;
		}
		else{
		
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	

}

int quicksort(int arr[],int start,int end){

	if(start<end){
	
		int piv = hoaressort(arr,start,end);

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
