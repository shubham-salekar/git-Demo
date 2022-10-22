/*

Enter number of rows
5
            5  
         5  6  
      5  4  3  
   5  6  7  8  
5  4  3  2  1  

*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<=row-i ; j++){
		
			printf("   ");
		}
		int num = row;

		for(int k=1 ; k<=i ; k++){
		
			if(i%2 == 1){
			
				printf("%d  ",num--);
			}else{
			
				printf("%d  ",num++);
			}
		}
		printf("\n");
	}
}
