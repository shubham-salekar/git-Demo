/*
enter num of rows
4
4  
3  3  
2  2  2  
1  1  1  1  
2  2  2  
3  3  
4  

*/

#include<stdio.h>

void main(){

	int row;
	printf("enter num of rows\n");
	scanf("%d",&row);

	int col;
	int num = row+1;

	for(int i=1 ; i<= row*2-1 ; i++){

		if(i<=row){
		
			col = i;
			num--;		

		}else{
		
			col = row*2-i; 
			num++;

		}
		for(int j = 1; j<=col ; j++){
		
			printf("%d  ",num);

		}
		printf("\n");
	}
}
