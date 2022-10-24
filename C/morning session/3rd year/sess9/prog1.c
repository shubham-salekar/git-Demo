/*
enter num of rows
4
*  
*  *  
*  *  *  
*  *  *  *  
*  *  *  
*  *  
*  
*/

#include<stdio.h>




void main(){

	int row;
	printf("enter num of rows\n");
	scanf("%d",&row);

	int col;

	for(int i=1 ; i<= row*2-1 ; i++){
	
		if(i<=row){
		
			col = i;
		}else{
		
			col = row*2-i; 
		}
		for(int j = 1; j<=col ; j++){
		
			printf("*  ");
		}
		printf("\n");
	}
}
