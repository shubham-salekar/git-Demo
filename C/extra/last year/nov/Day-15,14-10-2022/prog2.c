/*
	E 
      D E F 
    C D E F G 
  B C D E F G H 
A B C D E F G H I 
*/

#include<stdio.h>
void main(){

	int row;
	printf("Enter row size\n");
	scanf("%d",&row);

	int iteration = 1;

	for(int i=1 ; i<=row ; i++){
	
		char var = 'A'+row-i;

		for(int j=row-1 ; j>=i ; j--){
		
			printf("  ");
		}
		for(int k=1 ; k<=iteration ; k++){	//k<=2*i-1
		
			printf("%c ",var);
			var++;
		}
		iteration+=2;
		printf("\n");
	}
}
