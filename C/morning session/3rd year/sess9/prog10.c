/*
enter num of rows
4
1  
2  4  
3  6  9  
4  8  12  16  
3  6  9  
2  4  
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
		
			col = i;
			num = i;
		}else{
		
			col = row*2-i; 
			num = col;

		}
		for(int j = 1; j<=col ; j++){
		
			printf("%d  ",num);
			num += col;
		}
		printf("\n");
	}
}
