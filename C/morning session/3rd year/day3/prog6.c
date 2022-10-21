/*

Enter num of rows 
4

4 
3 3 
2 2 2 
1 1 1 1 

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){

		int num = row - i +1;	

		for(int j=1 ; j<=i ; j++){
		
			printf("%d ",num);
		}
		printf("\n");
	}
}
