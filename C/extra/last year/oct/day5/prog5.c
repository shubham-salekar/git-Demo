#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i = 1; i<=row ; i++){
	
		char ch1 = 'a';

		if(i<row/2+1){
		
			for(int j=1 ; j<=i ; j++){
			
				printf("%c ",ch1);
				ch1++;
			}
		}else{
		
			for(int k=i ; k<=row ; k++){
			
				printf("%c ",ch1);
				ch1++;
			}
		}
		printf("\n");
	}
}
