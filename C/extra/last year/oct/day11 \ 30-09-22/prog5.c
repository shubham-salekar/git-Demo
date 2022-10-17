/*

1	3	6	10	
12	15	19	
22	26	
30

*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	int var1 = 1;
	int rowdiff = row-1;
	int coldiff = 2;

	for(int i=1 ; i<=row ; i++){
	
		int var2 = var1;

		int coldiff1 = coldiff;

		for(int j=row ; j>=i ; j--){
		
			printf("%d\t",var2);
			var2+=coldiff1;
			coldiff1++;
		}
		var1 = var2-rowdiff;
		rowdiff--;

		coldiff++;

		printf("\n");
	}
}
