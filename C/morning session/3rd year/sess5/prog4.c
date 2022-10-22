/*
 	Enter number of rows
	4
			1	
		5	9	
	13	17	21	
25	29	33	37	
	
*/	

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	int num = 1;

	for(int i=1 ; i<=row ; i++){

		for(int j=1 ; j<=row-i ; j++){
		
			printf("\t");
		}
		for(int k=1 ; k<=i ; k++){
		
			printf("%d\t",num);
			num+=row;

		}
		printf("\n");
	}
}
