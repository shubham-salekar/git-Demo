/*	
	a 
	b a 
	c b a 
	d c b a 

*/

#include<stdio.h>
void main(){

	int row;
	printf("Enter row size\n");
	scanf("%d",&row);

	char ch = 'a';

	for(int i = 1; i<=row ; i++){
	
		ch = ch+i-1;

		for(int j = 1 ; j<=i ; j++){
		
			printf("%c ",ch);
			ch--;
		}
		ch = 'a';
		printf("\n");
	
	}
}
