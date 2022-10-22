/*
Enter number of rows
4
a  B  c  D  
   E  f  G  
      h  I  
         J  

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	char ch = 'a';

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<i ; j++){
		
			printf("   ");
		}
		for(int k=1 ; k<=row-i+1 ; k++){
		
			if((i+k)%2 == 0){
			
				printf("%c  ",ch++);
			}else{
			
				printf("%c  ",ch-32);
				ch++;
			}
		}
		printf("\n");
	}
}
