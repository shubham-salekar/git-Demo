#include<stdio.h>

void printarr1(int* ,int);
void printarr2(int* ,int);

void main(){

	int arr[] = {10,20,30,40,50};

	int arrSize = sizeof(arr)/sizeof(int);

	printarr1(arr,arrSize);
	printarr2(arr,arrSize);
}

//way1

void printarr1(int *ptr,int arrSize){

	for(int i=0 ; i<arrSize ; i++){
	
		printf("%d\n",*(ptr+i));
	}
}

//way2

void printarr2(int arr[],int arrSize){

	for(int i=0 ; i<arrSize ; i++){
	
		printf("%d\n",arr[i]);
	}

}
