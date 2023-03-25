
#include<stdio.h>

void countSort(int arr[],int size,int pos){

	int cntarr[10] = {0};
	
	/*
	// Assign 0
	for(int i=0 ; i<10 ; i++){
	
		cntarr[i] = 0;
	}*/
	

	// finding cnt of unit elements
	for(int i=0 ; i<size ; i++){
	
		cntarr[(arr[i]/pos) % 10]++;
		
	}


	/* // printing cnt array

	printf("cnt arr\n");
	for(int i=0 ; i<10 ; i++){
		
		printf("%d ",cntarr[i]);
	}
	printf("\n");
	*/


	// comulative sum of cntarr
	for(int i=1 ; i<10 ; i++){
	
		cntarr[i] = cntarr[i] + cntarr[i-1];
	}


	// filling new array
	int newarr[size];
	for(int i=size-1 ; i>=0 ; i--){
	
		newarr[cntarr[(arr[i]/pos)%10]-1] = arr[i];

		cntarr[(arr[i]/pos)%10]--;
	}
	
	// assign into main array
	for(int i=0 ; i<size ; i++)
		arr[i] = newarr[i];


	/*printf("new array in cnt\n");
	for(int i=0 ; i<6 ; i++){
		
		printf("%d ",arr[i]);
	}
	printf("\n");
	*/
	
	
}
void radixSort(int arr[],int size){

	int max = arr[0];
	for(int i=1 ; i<size ; i++ ){
	
		if(arr[i]>max)
			max = arr[i];
	}
	printf("max = %d\n",max);

	for(int pos=1 ; max/pos > 0 ; pos=pos*10){
	
		countSort(arr,size,pos);
		
		for(int i=0 ; i<6 ; i++){
		
			printf("%d ",arr[i]);
		}
		printf("\n");
	}

	printf("final sorted array\n");
	for(int i=0 ; i<size ; i++){
	
		printf("%d ",arr[i]);
	}
	printf("\n");

}
void main(){

	int arr[] = {720,435,275,5,82,115};

	int size = sizeof(arr)/sizeof(arr[0]);

	for(int i=0 ; i<size ; i++){
	
		printf("%d ",arr[i]);
	}
	printf("\n");

	radixSort(arr,size);
}
