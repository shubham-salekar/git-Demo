/*
 * 	1 2 3 4
 * 	1 3 5 7
 * 	1 4 7 10
 * 	1 5 9 13
 *
 */ 	

#include<stdio.h>

void main(){

	int x;

	printf("Enter no of rows");
	scanf("%d",&x);

	for (int i = 0 ; i<x ; i++){
	
		int var1 = 1;
		for(int j = 1 ; j<=x ; j++){
		
			printf("%d ",var1);
			var1 = var1+i+1;
		
		}
		printf("\n");
	
	}

}
