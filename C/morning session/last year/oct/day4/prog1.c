/*	
	4 5 6 7 
	8 10 12 14 
	12 15 18 21 
	16 20 24 28
*/

#include<stdio.h>
void main(){

	int row;
	printf("enter no of rows\n");
	scanf("%d",&row);

	for(int i = 1 ; i<=row ; i++){
	
		int var1 = row*i;

		for(int j = 1; j<=row ; j++){
		
			printf("%d ",var1);
			var1 += i;
		}
		printf("\n");
	
	}

}
