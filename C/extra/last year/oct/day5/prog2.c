/*
	0 1 1 2 
	3 5 8 
	13 21 
	34 
*/

#include<stdio.h>
void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	int n1 = 0;
	int n2 = 1;
	int temp;

	for(int i = 1 ; i<=row ; i++){

		for(int k = row ; k>=i ; k--){
		
			printf("%d ",n1);
			temp = n1;
			n1 = n1+n2;
			n2 = temp;

		}
		printf("\n");
	}
}
