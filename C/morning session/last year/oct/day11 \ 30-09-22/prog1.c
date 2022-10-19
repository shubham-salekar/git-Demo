/*
      10 
    I H 
  7 6 5 
D C B A 

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	int var1 = row*2+2;
	char ch1 = 'A'+row*2+1;

	for(int i=1 ; i<=row ; i++){

		for(int j=row-1 ; j>=i ; j--){
		
			printf("  ");
		}
		for(int k=1 ; k<=i ; k++){
		
			if(i%2 == 1){
			
				printf("%d ",var1);
			}else{
			
				printf("%c ",ch1);
			}
			var1--;
			ch1--;
		}
		printf("\n");
	}
}
