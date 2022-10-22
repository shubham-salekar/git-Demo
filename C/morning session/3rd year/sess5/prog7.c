/*

Enter number of rows
5
            A  
         b  a  
      C  E  G  
   d  c  b  a  
E  G  I  K  M  

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
	
		char ch = 'A'+i-1;

		for(int j=1 ; j<=row-i ; j++){
		
			printf("   ");
		}
		for(int k=1 ; k<=i ; k++){
	
			if(i%2 == 1){	
				printf("%c  ",ch);
				ch+=2;
			}else{
			
				printf("%c  ",ch+32);
				ch--;
			}

		}
		printf("\n");
	}
}
