
/* 
	 I H G
	 F E D
	 C B A



 */

#include<stdio.h>

void main(){

	int x;
	char char1 = 'I';

	printf("enter no. of rows:\n");
	scanf("%d" ,&x);

	for(int i = 1 ; i<= x ; i++){
	
		for(int j = 1 ; j<= x ; j++){
		
			printf("%c ",char1);
			char1--;

		}
		printf("\n");

	
		


	}


}

