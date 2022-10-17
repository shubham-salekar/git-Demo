
#include<stdio.h>

void main(){

	int size;
	printf("Enter size of array\n");
	scanf("%d",&size);

	int arr1[size];
	int arr2[size];


	printf("Enter first array elements:\n");
	for(int i = 0 ; i<size ; i++){
	
		scanf("%d",&arr1[i]);
	
	}
	printf("Enter second array elements:\n");
	
	for(int i = 0 ; i<size ; i++ ){
	
		scanf("%d",&arr2[size]);
	
	}
	for(int i = 0 ; i<size ; i++){
	
		printf("%d\n",(arr1[i])+(arr2[i]));
	}

}
