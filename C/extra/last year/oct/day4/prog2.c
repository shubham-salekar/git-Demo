/*	
	4 9 14 19 
	8 14 20 26 
	12 19 26 33 
	16 24 32 40 
 	
*/

#include<stdio.h>
void main(){

	int row;
	printf("enter no of rows\n");
	scanf("%d",&row);

	int diff = row+1;

	for(int i = 1 ; i<=row ; i++){
	
		int var1 = row*i;

		for(int j = 1; j<=row ; j++){
		
			printf("%d ",var1);
			var1 += diff;
		}
		diff++;
		printf("\n");
	
	}

}
