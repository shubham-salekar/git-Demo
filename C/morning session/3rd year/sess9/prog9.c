/*
enter num of rows
3
1  
3  2  1  
5  4  3  2  1  
3  2  1  
1  

*/

#include<stdio.h>

void main(){

	int row;
	printf("enter num of rows\n");
	scanf("%d",&row);

	int col;
	int num;

	for(int i=1 ; i<= row*2-1 ; i++){

		if(i<=row){
		
			col = i*2-1;
			num = col;
		}else{
		
			col -=2;
		        num = col;

		}
		for(int j = 1; j<=col ; j++){
		
			printf("%d  ",num--);
		}
		printf("\n");
	}
}
