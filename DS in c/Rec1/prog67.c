
// recursion in array : sum of numbers in array

#include<stdio.h>

int sum(int n,int arr[]){

	if(n==0){
	
		return arr[0];
	}
	return sum(n-1,arr) + arr[n];
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
	int s = sum(size-1,arr);	// try by passing original size ,sum(size,arr)

	printf("sum = %d\n",s);
}
