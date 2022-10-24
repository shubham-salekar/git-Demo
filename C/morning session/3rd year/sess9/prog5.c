/*
enter num of rows
4
3  
2  3  
1  2  3  
0  1  2  3  
1  2  3  
2  3  
3  

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
		
			col = i;
			num = row-i;
		
		}else{
		
			col = row*2-i;
		        num = i-row;

		}
		for(int j = 1; j<=col ; j++){
		
			printf("%d  ",num++);
		}
		printf("\n");
	}
}
