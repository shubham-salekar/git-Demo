/*

Enter num of rows 
4

1 
2 4 
3 6 9 
4 8 12 16

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){

		int num = i;	

		for(int j=1 ; j<=i ; j++){
		
			printf("%d ",num);
			num+=i;
			
		}

		printf("\n");

	}
}
