
// binary search

#include<stdio.h>

int count = 0;
int binary(int size,int arr[],int key){

	int start = 0;
	int end = size-1;
	int mid;

	while(start<=end){

		count++;
		mid = (start + end) / 2 ;
	
		if(arr[mid] == key){
		
			printf("step count = %d\n",count);
			return mid;
		}
		if(start == end-1){
		
			printf("step count = %d\n",count);
			return end;
		}
		if(key < arr[mid]){
		
			end = mid-1;
		}
		if(key > arr[mid]){
		
			start = mid+1;
		}

	/mnt/e/bootcamp-c-cpp-ds/DS in c/mnt/e/bootcamp-c-cpp-ds/DS in c}
	return -1;

}
void main(){

	int arr[] = {3,7,11,13,14,17,19,25,35,50};

	int ret = binary(10,arr,50);

	if(ret==-1){
	
		printf("element not found");
	}else{
	
		printf("ele found at index %d\n",ret);
	}
}
