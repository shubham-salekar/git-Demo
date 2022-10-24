/*
Enter no. of rows
4
*	*	*	#	*	*	*	
	*	*	#	*	*	
		*	#	*	
			#	

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	int x = row;

	for(int i=1 ; i<=row ; i++){	
			
		for(int j=1 ; j<i ; j++){
		
			printf("\t");
		}

		for(int k=row*2-i*2+1 ; k>=1 ; k--){
		
			if(k==x){
			
				printf("#\t");
			}else{
			
				printf("*\t");
			}
			
		}
		x--;
		printf("\n");
	}
}
