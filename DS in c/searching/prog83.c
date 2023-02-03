
// finding floor in distinct(duplicate num is not present) sorted array
// floor : the number is less than key but greater remaining values

// binary search

#include<stdio.h>

int flag = 0;
int store;
int floordemo(int arr[],int len,int key){

	if(arr[0]>key){
	
		return flag;
	
	}else if(arr[len-1] < key){
	
		flag = 1;
		return arr[len-1];
		
	}else{
		flag = 1;	
		int start = 0;
		int end = len-1;
		int mid;

		while(start<=end){
		
			mid = (start+end)/2;

			if(key >= arr[mid]){		//key == arr[mid]	
			
				store = arr[mid];	//	ret arr[mid]
			}
			if(arr[mid] > key){
				end = mid-1;
			}
			if(arr[mid] < key)
							// store = arr[mid]
				start = mid+1;		
		}
		return store;
	}

}
void main(){

	//int arr[] = {2,4,5,7,11,17,21};
	int arr[] = {5,7,14,21,28,35,70};

	int ret = floordemo(arr,7,15);
	
	if( flag == 0)
		printf("no floor is present\n");
	else
		printf("floor is %d\n",ret);

		
}
