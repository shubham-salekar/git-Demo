
#include<stdio.h>

int flag = 0;
int binary(int arr[],int start,int end,int key){

	printf("start = %d\nend = %d\n",start,end);
	while(start<=end){
	
		int mid = (start+end)/2;

		if(arr[mid] == key){
			
			flag = 1;	
			return mid;
		}
		if(arr[mid]< key){
		
			start = mid+1;
		}
		if(arr[mid] > key){
		
			end = mid-1;
		}
	}

}
int rotarray(int arr[],int size,int key){

	int start = 0;
	int end = size-1;
	int mid;
	int count = 0;

	if(start == end){
	
		if(arr[start] == key){
		
			flag = 1;
			return start;
		}else
			return flag;
	}
	if(arr[start] >= arr[end]){
	
		int i = 0;
		while(arr[i] <= arr[i+1]){
		
			count++;
			i++;
		}
		printf("count = %d",count);
	} 
	int ret;
	if(arr[start] >= arr[end]){
	
		if(arr[count+1] <= key && key <= arr[size-1] ){
		
			 ret = binary(arr,count+1,size-1,key);
		
		}else if( arr[start] <= key && key <= arr[count]){
		
			 ret = binary(arr,start,count,key);
		}
	}else{			// (optional) if array is sorted but not rotated(normal sorted array) 
	
		 ret = binary(arr,start,end,key);
	}

	return ret;

}
void main () {
        int size ;
        printf("Enter size of an array\n") ;
        scanf("%d",&size) ;

	if(size != 0 ){

       	 	int arr[size] ;
        	printf("Enter elements in an array\n") ;
       		 for (int i=0 ; i<size ; i++) {
                	scanf("%d",&arr[i]) ;
        	}
        	int key;
      	 	printf("Enter key\n") ;
        	scanf("%d",&key) ;


        	int ret = rotarray(arr,size,key) ;

		printf("ret = %d\n",ret);
		if(flag == 1){
	
			printf("%d element found at pos %d\n",key,ret);
		}else
			printf("Element is not found\n");
	}else
		printf("plese enter valid size of array (greater than zero)\n");
}



