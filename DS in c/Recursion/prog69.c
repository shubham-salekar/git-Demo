// character array

//searching elements in array using recursion

#include<stdio.h>

int search(char arr[],int size,char ch){

	if(arr[size] == ch){
	
		return size;
	}
	if(size == 0){
	
		return -1;
	}
	return search(arr,size-1,ch);
}
void main(){

	char arr[] = {'A','B','C','D','E'};

	int ret = search(arr,5,'D');

	if(ret == -1){
	
		printf("not found\n");
	}else{
	
		printf("Found at %d\n",ret);
	}	
}
