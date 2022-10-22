/*
Enter number of rows
5
1  3  5  7  9  
   9  7  5  3  
      3  5  7  
         7  5  
            5  
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	int num = 1;

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<i ; j++){
		
			printf("   ");
		}
		for(int k=1 ; k<=row-i+1 ; k++){
		
			if(i%2 == 1){
			
				printf("%d  ",num);
				num+=2;
			}else{
			
				printf("%d  ",num);
				num-=2;
			}
				
		}
		(i%2 == 1)?(num-=2):(num+=2);

		printf("\n");
	}
}
