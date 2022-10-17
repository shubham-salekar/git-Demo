/*
	17 15 13 
	11 9 7 
	5 3 1 
*/

#include<stdio.h>
void main(){

	int row;
	printf("Enter row size\n");
	scanf("%d",&row);

	int var1 = row*row*2-1;

	for(int i = 1; i<=row ; i++){
	
		for(int j = 1; j<=row ; j++){
		
			printf("%d ",var1);
			var1 --;
			var1 --;
		}
		printf("\n");
	
	}

}
