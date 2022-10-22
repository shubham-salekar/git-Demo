/*
Enter number of rows
4
         d  
      C  C  C  
   b  b  b  b  b  
A  A  A  A  A  A  A  

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){

		char ch = 'a'+row-i;

		for(int j=1 ; j<=row-i ; j++){
		
			printf("   ");
		}
		for(int k=1 ; k<= i*2-1 ; k++){
		
			if(i%2==1){
				printf("%c  ",ch);
			
			}else{
				printf("%c  ",ch-32);
			}
		}
		printf("\n");
	
	}
}
