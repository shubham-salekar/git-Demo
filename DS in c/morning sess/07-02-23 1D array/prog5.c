// array rotation

#include<stdio.h>

int* rotarray(int arr[],int size,int b){

	while(b){
	
		int num1 = arr[size-1];

		int i= size-1;
		int j = size-1;
		int k = size-2;

		while(i){
		
			arr[j] = arr[k];
			j--;
			k--;
			i--;
		}
		arr[0] = num1;
		b--;
	}
	return arr;
}

void main(){

	int size;
	printf("enter array size\n");
	scanf("%d",&size);

	int arr[size];

	printf("enter array elements\n");

	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	int num1;
	printf("enter iteration count\n");
	scanf("%d",&num1);

	 rotarray(arr,size,num1);
	
	printf("array after reversing in range \n");
	
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",arr[i]);
	}

	printf("\n");
	
}
