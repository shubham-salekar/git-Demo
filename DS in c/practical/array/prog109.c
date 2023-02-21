
#include<stdio.h>

int totalcount(int arr[],int size){

	int count = 0;
	for(int i=0 ;i<size ; i++){
	
		int num = arr[i];
		for(int j=0 ; j<size ; j++){
		
			if(arr[j] > num){
			
				count++;
				break;
			}
		}
	}
	return count;

}
void main(){

	int size;
	printf("enter array size\n");
	scanf("%d",&size);

	int arr[size];
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	int ret = totalcount(arr,size);

	printf("count = %d\n",ret);
}
