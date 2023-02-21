
#include<stdio.h>

void merge(int arr1[],int start,int mid,int end){

	int ele1 = mid-start+1;
	int ele2 = end-mid;

	int arr2[ele1];
	int arr3[ele2];

	for(int i=0 ; i<ele1 ; i++){
	
		arr2[i] = arr1[start+i]; 
	}
	for(int i=0 ; i<ele2 ; i++){
	
		arr3[i] = arr1[mid+1+i]; 
	}
	int itr1 = 0;
	int itr2 = 0;
	int itr3 = start;

	while(itr1<ele1 && itr2<ele2){
	
		if(arr2[itr1] < arr3[itr2]){
		
			arr1[itr3] = arr2[itr1];
			itr1++;
		
		}else{
		
			arr1[itr3] = arr3[itr2];
			itr2++;
		}
		itr3++;
	}
	while(itr1 < ele1){
	
		arr1[itr3] = arr2[itr1];
		itr3++;
		itr1++;
	}
	while(itr2 < ele2){
	
		arr1[itr3] = arr3[itr2];
		itr2++;
		itr3++;
	}

}
int mergesort(int arr1[],int start,int end){

	if(start<end){
	
		int mid = (start+end)/2;

		mergesort(arr1,start,mid);
		mergesort(arr1,mid+1,end);

		merge(arr1,start,mid,end);
	}
}
void main(){

	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	int arr1[size];

	printf("Enter array elements\n");
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr1[i]);
	}
	printf("unsorted array elements\n");
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",arr1[i]);
	}
	printf("\n");

	mergesort(arr1,0,size-1);

	printf("sorted array elements\n");
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",arr1[i]);
	}
	printf("\n");
}
