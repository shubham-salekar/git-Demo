/*

Enter number of rows
4
         4  
      4  3  4  
   4  3  2  3  4  
4  3  2  1  2  3  4  
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	int num = row;

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
		num--;
	}
}
