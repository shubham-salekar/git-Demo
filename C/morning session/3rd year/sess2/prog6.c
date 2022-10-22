/*
Enter num of rows 
3

1 2 3 
2 3 4 
3 4 5 

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
	
		int num = i;

		for(int j=1 ; j<=row ; j++){
		
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}
