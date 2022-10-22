/*

Enter num of rows and columns 
3
4
   o/p:	1 2 3 4 
	5 6 7 8 
	9 10 11 12 

*/
#include<stdio.h>

void main(){

	int row,col;
	printf("Enter num of rows and columns \n");
	scanf("%d%d",&row,&col);

	int num = 1;

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<=col ; j++){
		
			printf("%d ",num++);
		}
		printf("\n");
	}
}
