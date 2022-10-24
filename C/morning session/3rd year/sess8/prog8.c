/*
Enter number of rows
4
D  C  B  A  B  C  D  
   c  b  a  b  c  
      B  A  B  
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
		for(int k=1 ; k<= row*2-2*i+1 ; k++){
		
			if(i%2==1){
			
				if(k<=row-i){
				
					printf("%c  ",ch);
					ch--;
				}else{
				
					printf("%c  ",ch);
					ch++;
				}
			}else{
			
				if(k<=row-i){
				
					printf("%c  ",ch+32);
					ch--;
				}else{
				
					printf("%c  ",ch+32);
					ch++;
				}
			}

		}
		printf("\n");
	}

}

