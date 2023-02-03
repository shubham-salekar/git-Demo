
// finding silling in distinct(duplicate num is not present) sorted array
// silling : the number is greater than key but less than remaining values

// binary search

#include<stdio.h>

int flag = 0;
int store;
int seildemo(int arr[],int len,int key){

	if(arr[0]>key){
	
		flag = 1;
		return arr[0];
	
	}else if(arr[len-1] < key){
		
		flag = 0;
		return flag;
		
	}else{
		flag = 1;	
		int start = 0;
		int end = len-1;
		int mid;

		while(start<=end){
		
			mid = (start+end)/2;

			if(key == arr[mid]){		
			
				return arr[mid];
			}
			if(arr[mid] > key){
				store = arr[mid];
				end = mid-1;
			}
			if(arr[mid] < key)
							
				start = mid+1;		
		}
		return store;
	}

}
void main(){

	int arr[] = {2,4,5,7,11,17,21};
	//int arr[] = {5,7,14,21,28,35,70};

	int ret = seildemo(arr,7,9);
	
	if( flag == 0)
		printf("no seiling is present\n");
	else
		printf("seiling is %d\n",ret);

		
}
