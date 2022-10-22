/*
Enter number of rows
4
         D  
      c  D  c  
   B  c  D  c  B  
a  B  c  D  c  B  a  

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
		
			if(k<i){
				if((i+k)%2==0){
				
					printf("%c  ",ch-32);
				
				}else{
				
					printf("%c  ",ch);
				}
				ch++;
			
			}else{

				if((i+k)%2 ==1){
				
					printf("%c  ",ch);
				}else{
				
					printf("%c  ",ch-32);
				}
				ch--;
			}
		}
		printf("\n");
	
	}
}
