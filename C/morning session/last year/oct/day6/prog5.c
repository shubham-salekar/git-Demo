
/*
	a 
	b c 
	d e f 
	g h 
	i 
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	char ch1 = 'a';

	for(int i=1 ;i<=row ; i++){
	
		if(i<row/2+1){
		
			for(int j=1; j<=i ; j++){
			
				printf("%c ",ch1++);

			}
		}else{
		
			for(int k=i ; k<=row ; k++){
			
				printf("%c ",ch1++);
			}
		}
		printf("\n");
	

	}
}
