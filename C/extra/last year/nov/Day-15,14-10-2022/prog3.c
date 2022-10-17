/*
	E 
      D E F 
    C D E F G 
  B C D E F G H 
A B C D E F G H I 
  B C D E F G H 
    C D E F G 
      D E F 
        E 

*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter row size\n");
	scanf("%d",&row);

	char var = 'A';
	int inrc = 1;
	int iteration = row;

	for(int i=1 ; i<=row ; i++){
	
		if(i<=row/2+1){
		
			var = 'A'+row/2 -i+1;
			
			for(int j= row/2 ; j>=i ; j--){
			
				printf("  ");
			}
			for(int k=1 ; k<=i*2-1 ; k++){
			
				printf("%c ",var++);

			}

		}else if(i>row/2+1){
		
			iteration -=2;
			var = 'A'+inrc;

			for(int j=1 ; j<=inrc ; j++){
			
				printf("  ");
			}
			for(int k= 1 ; k<=iteration ; k++){
			
				printf("%c ",var);
				var++;
			}
			inrc++;
			
		}
		printf("\n");
	}
}
