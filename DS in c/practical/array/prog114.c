
// return same arraay after converting it into prefix array

#include<stdio.h>

void prefixsum(int arr[],int size){

	for(int i=1 ; i<size ; i++ ){
	
		arr[i] = arr[i-1] + arr[i];
	}
}
void main(){

	int size;
	printf("enter array size\n");
	scanf("%d",&size);

	int arr[size];
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	prefixsum(arr,size);
	
	printf("prefix array\n");
	for(int i=0 ; i<size ; i++ ){
	
		printf("%d ",arr[i]);
	}
	printf("\n");
}
