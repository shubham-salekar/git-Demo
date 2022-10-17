#include<stdio.h>
#include<limits.h>

void main(){
	int arr[]={10,6,87,90,3,5,2,67};
	int max1=INT_MIN;
	int max2=INT_MIN;

	for(int i=0 ; i<8 ; i++ ){
		if(arr[i]>max1){
			max2=max1;
			max1=arr[i];
		}else if(arr[i]>max2){
			max2=arr[i];
		}
	}

	printf(" %d is second largest \n",max2);

}
