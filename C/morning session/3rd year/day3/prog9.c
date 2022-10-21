/*

Enter num of rows 
4

4 
8 12 
16 20 24 
28 32 36 40 

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	int num = row;

	for(int i=1 ; i<=row ; i++){	

		for(int j=1 ; j<=i ; j++){
		
			printf("%d ",num);
			num+=row;
		}

		printf("\n");

	}
}
