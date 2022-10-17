/*	1 
	2 4 
	3 6 9 
	4 8 12 16 
*/

#include<stdio.h>
void main(){

	int var1 = 1;
	
	int row;
	printf("Enter row size\n");
	scanf("%d",&row);

	for(int i = 1; i<=row ; i++ ){
	
		var1 = var1+i-1;
		for(int j = 1 ; j<=i ; j++ ){
		
			printf("%d ",var1);
			var1+=i;
		
		}
		var1 = 1;
		printf("\n");
	
	}

}
