/*

row = 6
col = 4

 1  2  3  4
 a  b  c  d
 #  #  #  #
 5  6  7  8
 e  f  g  h
 #  #  #  #

*/

#include<stdio.h>

void main(){

	int row,col;
	printf("Enter num of rows and columns \n");
	scanf("%d%d",&row,&col);

	int num = 1;
	char ch = 'a';

	for(int i=1 ; i<=row ; i++){
	
		int n1 = i;

		for(int j=1 ; j<=col ; j++){

			while(n1>3){
			
				n1 = n1%3;
			}
			if(n1 == 1){
			
				printf("%d ",num++);
	
			}else if(n1 == 2){
			
				printf("%c ",ch++);
			}else{
			
				printf("# ");
			}
					
			
		}
		printf("\n");
	}






















}
