
#include<stdio.h>

int  equilibrium(int arr[],int size){

	int prefix[size];
	prefix[0] = arr[0];

	for(int i=1 ; i<size ; i++){
	
		prefix[i] = prefix[i-1] + arr[i];
	}
	for(int i=1 ; i<size ; i++){
	
		int highsum = 0;
		for(int j= i+1 ; j<size ; j++){
		
			highsum = highsum + arr[j];
		}
		if(highsum == prefix[i-1]){

			printf("pref = %d\n",prefix[i-1]);
			printf("sum = %d\n",highsum);
			printf("eue = %d\n",arr[i]);
			return i;
		}
	}
	return -1;

}
void main(){

	int size;
	printf("enter array size\n");
	scanf("%d",&size);

	int arr[size];
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}
	int ret = equilibrium(arr,size);

	if(ret != -1)
		printf("Equilibrium is at index %d\n",ret);
	else
		printf("equilibrium not found\n");
}
