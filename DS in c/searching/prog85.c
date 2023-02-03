
// finding first occurance in sorted array

// binary search

#include<stdio.h>

int flag = 0;
int store;
int firstocc(int arr[],int len,int key){

	if(arr[0]>key){
	
		return flag;
	
	}else if(arr[len-1] < key){
	
		return flag;	
	}else{
			
		int start = 0;
		int end = len-1;
		int mid;

		while(start<=end){
		
			mid = (start+end)/2;

			if(key == arr[mid]){
			
				store = mid;
				end = mid-1;
				flag = 1;
			}
			if(arr[mid] > key){
				end = mid-1;
			}
			if(arr[mid] < key)
						
				start = mid+1;		
		}
		return store;
	}

}
void main(){

	int arr[] = {2,3,4,5,5,5,7,7,8,9,9,11,12};

	//int arr[] = {2,3,3,4,4,4,4,5,6,8,11,18};

	int ret = firstocc(arr,13,5);
	
	if( flag == 0)
		printf("num is not present\n");
	else
		printf("first occurance is %d\n",ret);

		
}
