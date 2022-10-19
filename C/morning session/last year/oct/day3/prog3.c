/*
	a 
	b B 
	c C c 
	d D d D  
	 
*/	
#include<stdio.h>

void main(){

	int row;
	printf("enter size of rows\n");
	scanf("%d",&row);

	int ch1 = 'a' ;

	for(int i = 1; i<=row ; i++){
	
		ch1 = 'a'+i-1;

		for(int j = 1 ; j<=i ; j++){
		
			if(j%2 == 0){
			
				printf("%c ",ch1-32);
			}else{
			
				printf("%c ",ch1);
			}
			
		}
		printf("\n");
	
	}


}
