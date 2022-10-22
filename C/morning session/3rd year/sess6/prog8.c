/*

Enter number of rows
4
D  D  D  D  
   c  c  c  
      B  B  
         a  
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
	
		char ch = 'A'+row-i;

		for(int j=1 ; j<i ; j++){
		
			printf("   ");
		}
		for(int k=row ; k>=i ; k--){
		
			if(i%2 == 1){
			
				printf("%c  ",ch);
			}else{
			
				printf("%c  ",ch+32);
			}
		}
		printf("\n");
	}
}
