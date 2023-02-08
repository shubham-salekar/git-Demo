
					// incomplete

// binary search in rotated array

#include<stdio.h>

int binary(int size,int arr[],int key){

	int start = 0;
	int end = size-1;
	int mid;
	int count = 1;

	if(arr[start] >= arr[end]){
	
		int i = 0;
		while(arr[i] < arr[i+1]){
		
			count++;
			i++;
		}

	}else if(arr[start] >= arr[end]){
	
		int size1 = size;
		int arr2[size1];

		int i=0;int j=0;
		while(size1){
		
			if(count <= size-1){
			
				arr2[i] = arr[count];
				i++;
				count++;
			}else{
			
				arr2[i] = arr[j];
				i++;
				j++;
			}
			size1--;
		}
		binary(size,arr2,key);

	}else{
		while(start<=end){

			mid = (start + end) / 2 ;
	
			if(arr[mid] == key){
		
				return mid;
			}
			if(key < arr[mid]){
		
				end = mid-1;
			}
			if(key > arr[mid]){
		
				start = mid+1;
			}
		}
		return -1;
	}


}
void main(){

	int arr[] = {8,9,10,4,5,6,7};

	int ret = binary(7,arr,8);

	if(flag = 0){
	
		ret = ret
	}
	if(ret==-1){
	
		printf("element not found");
	}else{
	
		printf("ele found at index %d\n",ret);
	}
}
