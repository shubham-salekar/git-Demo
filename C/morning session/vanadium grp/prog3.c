
#include<stdio.h>

void other(int *ptr,int arrSize){

	for(int i=0 ; i<arrSize ; i++){
	
		printf("%d ",*(ptr+i));
	}
	
}
void main(){

	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);

	int arr[size]; 

	printf("Enter array elements\n");
	
	int arrSize = sizeof(arr)/sizeof(int);

	for(int i=0 ; i<arrSize ; i++){
	
		scanf("%d",&arr[i]);
	}
	other(arr,arrSize);

}
