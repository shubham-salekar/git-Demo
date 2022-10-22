/*

Enter number of rows
4
-	-	-	1	
-	-	4	9	
-	64	125	216	
2401	4096	6561	10000	

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	int num = 1;

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<=row-i ; j++){
		
			printf("-\t");
		}
	//	int num1 = 1;

		for(int k=1 ; k<=i ; k++){
	
			int num1 = 1;

			for(int l = 1 ; l<=i ; l++){
			
				num1 = num1*num;
			}
			printf("%d\t",num1);
			num++;
		}
		printf("\n");
	}
}
