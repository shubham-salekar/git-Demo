/*
A A A A A A A A A 
  B B B B B B B 
    C C C C C 
      D D D 
        E 
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	char ch1 = 'A';

	int num = row;
	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<i ; j++){
		
			printf("  ");
		}
		
		for(int k=(num*2-1) ; k>=1 ; k--){
		
			printf("%c ",ch1);
		}
		ch1++;
		num--;
		printf("\n");
	}
}
