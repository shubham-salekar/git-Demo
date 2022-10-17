// fibanocci series up to given range take only end from user

#include<stdio.h>

void main(){

	int end;
	printf("enter end\n");
	scanf("%d",&end);
	
	int n1 = 0;
	int n2 = 1;

	int temp = 0;

	for(int i = 1 ; i<=end ; i++){
	
		printf("%d ",n1);

		temp = n1;

		n1 = n1+n2;

		n2 = temp;

		if(n1 > end){
		
			break;
		}
	}
	printf("\n");

}
