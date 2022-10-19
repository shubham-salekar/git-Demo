/*	1 
	1 2 
	2 3 4 
	4 5 6 7 
	7 8 9 10 11 
*/

#include<stdio.h>

void main(){

	int row;
	printf("enter a row size\n");
	scanf("%d",&row);

	int var1 = 1;

	for(int i = 0;i<row ; i++){
	
		
		for(int j = 0; j<=i ; j++){
		
			printf("%d ",var1);
			var1++;
		
		}
		printf("\n");
		var1 = var1-1;
		
	
	}

}
