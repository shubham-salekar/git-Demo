/*
enter num of rows
4
D  
C  D  
B  C  D  
A  B  C  D  
B  C  D  
C  D  
D  

*/

#include<stdio.h>

void main(){

	int row;
	printf("enter num of rows\n");
	scanf("%d",&row);

	int col;
	char ch;

	for(int i=1 ; i<= row*2-1 ; i++){

		if(i<=row){
		
			col = i;
			ch = 'A' +row-i;
		}else{
		
			col = row*2-i; 
			ch = 'A'+i-row;

		}
		for(int j = 1; j<=col ; j++){
		
			printf("%c  ",ch);
			ch++;
		}
		printf("\n");
	}
}
