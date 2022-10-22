/*
Enter num of rows 
4

4 3 2 1 
C B A 
2 1 
A 

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){

		int num = row - i +1;

		for(int j=row ; j>=i ; j--){
		
			if(i%2 == 1){
				printf("%d ",num--);
			
			}else{
			
				printf("%c ",num+64);
				num--;
			}
		}

		printf("\n");

	}
}
