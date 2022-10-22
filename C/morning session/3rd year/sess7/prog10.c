/*
Enter number of rows
5
            A  
         b  a  b  
      C  E  G  E  C  
   d  c  b  a  b  c  d  
E  G  I  K  M  K  I  G  E  

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
		for(int k=1 ; k<= i*2-1 ; k++){
		
			if(i%2==1){
				
				if(k<i){
				
					printf("%c  ",ch);
					ch+=2;
				}else{
				
					printf("%c  ",ch);
					ch-=2;
				}
			
			}else{
				
				if(k<i){
				
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
