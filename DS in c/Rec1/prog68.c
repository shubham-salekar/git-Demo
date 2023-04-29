// character array

//searching elements in array

#include<stdio.h>

int search(char arr[],int size,char ch){

	for(int i=0 ; i<=size ; i++){
	
		if(arr[i] == ch){
		
			return i;
		}
	}
	return -1;
	
}
void main(){

	char arr[] = {'A','B','C','D','E'};

	int ret = search(arr,5,'g');

	if(ret == -1){
	
		printf("not found\n");
	}else{
	
		printf("Found at %d\n",ret);
	}	
}
