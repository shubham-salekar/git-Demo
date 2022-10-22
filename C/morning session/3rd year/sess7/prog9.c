/*
Enter number of rows
5
            5  
         5  4  5  
      5  4  3  4  5  
   5  4  3  2  3  4  5  
5  4  3  2  1  2  3  4  5  

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){

		int num = row;

		for(int j=1 ; j<=row-i ; j++){
		
			printf("   ");
		}
		for(int k=1 ; k<= i*2-1 ; k++){
		
			if(k<i){
				printf("%d  ",num);
				num--;
			
			}else{
				printf("%d  ",num);
				num++;
			}
		}
		printf("\n");
	
	}
}
