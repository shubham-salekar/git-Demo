
// sorting 2 array firstly and merging them into new array


#include<stdio.h>

int sortdemo(int arr1[],int arr2[],int arr3[],int size1,int size2){

	for(int i=0 ; i<size1-1 ; i++){
	
		int min1 = i;
		for(int j=i+1 ; j<size1 ; j++){
		
			if(arr1[min1] > arr1[j])
				min1 = j;

		}
		int temp = arr1[min1];
		arr1[min1] = arr1[i];
		arr1[i] = temp;
	}
	for(int i=0 ; i<size2-1 ; i++){
	
		int min2 = i;
		for(int j=i+1 ; j<size2 ; j++){
		
			if(arr2[min2] > arr2[j])
				min2 = j;

		}
		int temp = arr2[min2];
		arr2[min2] = arr2[i];
		arr2[i] = temp;
	}
	int j = 0;
	int k = 0;
	for(int i=0 ; i<(size1+size2) ; i++){
	
		if(arr1[j] < arr2[k]){
		
			arr3[i] = arr1[j];
			j++;
		}else{
		
			arr3[i] = arr2[k];
			k++;
		}
	}
}
void main(){

	int size;
	printf("Enter array size\n");
	scanf("%d",&size);
	int arr1[size];

	int size2;
	printf("Enter array size\n");
	scanf("%d",&size2);
	int arr2[size2];

	int arr3[size+size2];

	printf("Enter array 1 elements\n");
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr1[i]);
	}
	printf("Enter array 2 elements\n");
	for(int i=0 ; i<size2 ; i++){
	
		scanf("%d",&arr2[i]);
	}

	sortdemo(arr1,arr2,arr3,size,size2);

	printf("combine sorted array\n");
	for(int i=0 ; i<(size+size2) ; i++){
	
		printf("%d ",arr3[i]);
	}
	printf("\n");
}
