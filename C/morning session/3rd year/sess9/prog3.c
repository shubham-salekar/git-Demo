/*
enter num of rows
4
1  
2  1  
3  2  1  
4  3  2  1  
3  2  1  
2  1  
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

		int num = 1;

		if(i<=row){
		
			col = i;
			num = i;
		}else{
		
			col = row*2-i; 
			num = col;

		}
		for(int j = 1; j<=col ; j++){
		
			printf("%d  ",num--);
		}
		printf("\n");
	}
}
