
#include<stdio.h>

int sumarr(int*,int );

void main(){

	int arr[] = {10,20,30,40,50,60};

	int arrsize = sizeof(arr)/sizeof(int);

	int sum = sumarr(arr,arrsize);

	printf("%d\n",sum);
	
}

int sumarr(int *ptr,int arrsize){

	int sum = 0;

	for(int i=0 ; i<arrsize ; i++){
	
		sum = sum + *(ptr+i);
	}
	return sum;
	
}
