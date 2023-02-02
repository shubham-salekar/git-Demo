
// interpolation search

#include"stdio.h"

int Demo(int size,int arr[],int key){

	int start = 0;
	int end = size-1;

	int index = start + ( (key - arr[start]) / (arr[end] - arr[start]) ) * (end - start);

	return index;

}
void main(){

	int arr[] = {1,3,5,7,9,11,13};

	int ret = Demo(7,arr,9);

	if(ret==-1){
	
		printf("element not found\n");
	}else{
	
		printf("element is found at index %d\n",ret);
	}
}
