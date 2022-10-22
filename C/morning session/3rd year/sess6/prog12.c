/*

Enter number of rows
4
A  b  C  d  
   e  G  i  
      K  n  
         q  
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	char ch = 'A';

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<i ; j++){
		
			printf("   ");
		}
		for(int k=1 ; k<=row-i+1 ; k++){
		
			if((i+k)%2 ==0){
			
				printf("%c  ",ch);
				ch+=i;
			}else{
			
				printf("%c  ",ch+32);
				ch+=i;
			}

		}
		printf("\n");
	}
}
