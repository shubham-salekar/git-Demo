// counting sort : unstable

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
	
	// filling sorted values in newarr(unstable)
	int newarr[size];
	int j = 0;
	int index = 0;
	for(int i=0 ; i<=max ; ){
	
		if(cntarr[i] != 0){

			newarr[j] = i;
			j++;
			cntarr[i]--;
		}else{
			i++;
		}
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
