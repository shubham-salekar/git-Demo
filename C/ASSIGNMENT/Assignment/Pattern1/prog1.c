/*
	1 2 3 4
	2 3 4 5
	3 4 5 6 
	4 5 6 7
*/



#include<stdio.h>

void main(){

	int x;
	printf("enter no of rows:\n");
	scanf("%d",&x);

	int var1 = 1;
	for(int i = 0; i< x ; i++){
	
		int var2 = var1+i;
		for(int j = 0; j < x ; j++){
		
			printf("%d ",var2);
			var2++;
		
		}
		printf("\n");

	
	}

}
