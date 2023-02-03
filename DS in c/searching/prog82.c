
// finding floor in distinct(duplicate num is not present) sorted array
// floor : the number is less than key but greater remaining values

// linear search

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
	
		for(int i=0 ; i<len ; i++){
	
			if(arr[i] <= key){
				store = arr[i];
				flag = 1;
			}
			if(arr[i]>=key)
				return store;
		}
		return -1;
	}

}
void main(){

	int arr[] = {2,4,5,7,11,17,21};

	int ret = floordemo(arr,7,12);
	
	if( flag == 0)
		printf("no floor is present\n");
	else
		printf("floor is %d\n",ret);

		
}
