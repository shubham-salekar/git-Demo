#include<stdio.h>

void main(){

	int num;
	printf("Emter a number\n");
	scanf("%d",&num);

	int arr[10];
	int *ptr = arr;		//arr[0] same as arr in 1D	

	for(int i = 0 ; i<10 ; i++){
	
		arr[i] = num * (i+1);
	}
	for(int i=0 ; i<10 ; i++){
	
		printf("%d ",*(ptr+i));
	}
}
