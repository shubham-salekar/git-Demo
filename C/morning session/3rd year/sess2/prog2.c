/*

Enter num of rows 
3

1 4 7 
10 13 16 
19 22 25 

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	int num = 1;

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<=row ; j++){
		
			printf("%d ",num);
			num+=3;
		}
		printf("\n");
	}
}
