
// pass 2D array to function and print it in function.

#include<stdio.h>

void fun(int (*ptr)[3] , int arrsize){

	printf("array is \n");

	for(int i=0 ; i<arrsize ; i++){
	
		printf("%d ",*(*ptr+0)+i);
	}
	printf("\n");
}
void main(){

	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	int arrsize = sizeof(arr)/sizeof(int);
	
	printf("Arrsize = %d\n",arrsize);

	fun(arr,arrsize);
}
