
// sum of numbers in array

#include<stdio.h>

int sum(int n,int arr[]){

	int sum = 0;
	for(int i=0 ; i<n ; i++){
	
		sum = sum + arr[i];
	}
	return sum;
}
void main(){

	int size;
	printf("enter size of array\n");
	scanf("%d",&size);

	int arr[size];

	printf("Enter array elements\n");

	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	int s = sum(size,arr);
	printf("sum = %d\n",s);
}
