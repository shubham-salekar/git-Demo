/*
	1 
	1 2 
	1 2 3 
	1 2 3 4 
	1 2 3 
	1 2 
	1 
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i=1 ;i<=row ; i++){
	
		int num = 1;

		if(i<row/2+1){
		
			for(int j=1; j<=i ; j++){
			
				printf("%d ",num++);

			}
		}else{
		
			for(int k=i ; k<=row ; k++){
			
				printf("%d ",num++);
			}
		}
		printf("\n");
	

	}
}
