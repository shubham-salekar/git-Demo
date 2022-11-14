#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	int space = 1;
	int space2 = 2;
	for(int i=1 ; i<=row ; i++){
	
		if(i<=row/2-2){
		
			for(int j = 1;j<=i ; j++){
			
				printf("* ");
			}
			

		}else if(i<=row/2){
		
			for(int k=1 ; k<=space2 ; k++){
			
				printf("* ");
			}
			space2--;
		

		}else if(i>row/2 && i<=row/2+3){
		
			
			for(int j=1 ; j<=space ; j++){
			
				printf("* ");
			}
			space++;
			
		
		}else if(i>row/2+3){
		
			for(int k=i ; k<=row ; k++){
			
				printf("* ");
			}
			
		}
		printf("\n");
	}
}
