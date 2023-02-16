
// sort by factors of number

#include<stdio.h>

int factordemo(int num){

	int count = 2;
	for(int i=2 ; i<=(num/2) ; i++){
	
		if(num%i == 0)
			count++;
	}
	return count;
}
int sortdemo(int arr[],int size){

	for(int i=0 ; i<size-1 ; i++){
	
		for(int j=0; j<size-1-i ; j++){
		
			if(factordemo(arr[j]) > factordemo(arr[j+1])){
			
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			else if(factordemo(arr[j]) == factordemo(arr[j+1])){
			
				if(arr[j] > arr[j+1]){
				
					int temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;

				}
			}
		}
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
	sortdemo(arr,size);

	printf("sorted array\n");
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",arr[i]);
	}
	printf("\n");
}
