/*
enter num of rows
3
*  
*  *  *  
*  *  *  *  *  
*  *  *  
*  

*/

#include<stdio.h>

void main(){

	int row;
	printf("enter num of rows\n");
	scanf("%d",&row);

	int col;
	int itr = 1;

	for(int i=1 ; i<= row*2-1 ; i++){

		if(i<row){
		
			col = itr;
			itr+=2;

		}else{
		
			col = itr;
			itr-=2;
		}

		for(int j = 1; j<=col ; j++){
		
			printf("*  ");
		}
		printf("\n");
	}
}
