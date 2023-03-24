// counting sort : stable

#include<stdio.h>

void cntSort(int arr[],int size){

	//finding max element
	int max = arr[0];
	for(int i=1 ; i<size ; i++){
	
		if(arr[i] > max)
			max = arr[i];
	}

	// declaring array upto max element
	int cntarr[max+1];
	for(int i=0 ; i<=max ; i++)
		cntarr[i] = 0;

	
	// counting numbers in array and filling into cntarr
	for(int i=0 ; i<size ; i++){
	
		int temp = arr[i];
		cntarr[temp]++;
	}
	
	// comulative sum
	for(int i=1 ; i<=max ; i++){
	
		cntarr[i] = cntarr[i] + cntarr[i-1];
	}

	//filling sorted values in newarr(stable)
	int newarr[size];
	for(int i= size-1 ; i>=0 ;i--){
	
		newarr[cntarr[arr[i]]-1] = arr[i];

		/*
		int temp = arr[i];
		newarr[cntarr[temp] - 1];
		*/

		cntarr[arr[i]]--;
	}
	
	
	// printing sorted array
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",newarr[i]);
	}
	printf("\n");
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

	cntSort(arr,size);
}
