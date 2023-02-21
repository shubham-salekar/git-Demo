
#include<stdio.h>

void product(int arr[],int prodarr[],int size){

	int prod = 1;
	for(int i=0 ; i<size ; i++)
		prod = prod*arr[i];

	for(int i=0 ; i<size ; i++)
		prodarr[i] = prod/arr[i];

}

void main(){

	int size;
	printf("enter array size\n");
	scanf("%d",&size);

	int arr[size];
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	int prodarr[size];
	product(arr,prodarr,size);
	
	printf("product array\n");
	for(int i=0 ; i<size ; i++ ){
	
		printf("%d ",prodarr[i]);
	}
	printf("\n");
}
