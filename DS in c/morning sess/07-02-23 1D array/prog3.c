// reverse in range

#include<stdio.h>

void revrange(int arr[],int size,int b,int c){

	while(b<c){
	
		int d = arr[b];
		arr[b] = arr[c];
		arr[c] = d;

		b++;
		c--;
	}
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
	int num1,num2;
	printf("enter range number\n");
	scanf("%d%d",&num1,&num2);

	revrange(arr,size,num1,num2);
	
	printf("array after reversing in range \n");
	
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",arr[i]);
	}

	printf("\n");
	
}
