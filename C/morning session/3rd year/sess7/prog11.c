/*
Enter number of rows
4
         1  
      A  b  A  
   1  2  3  2  1  
A  b  C  d  C  b  A  

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
	
		int num = 1;
		char ch = 'A';

		for(int j=1 ; j<=row-i ; j++){
		
			printf("   ");
		}
		for(int k=1 ; k<= i*2-1 ; k++){
		
			if(i%2 == 1){
				if(k<i){
			
					printf("%d  ",num);
					num++;
				}else{
			
					printf("%d  ",num);
					num--;
				}
			}else{
			
				if(k<i){
				
					if((i+k)%2==1){
					
						printf("%c  ",ch);
					}else{
					
						printf("%c  ",ch+32);
					}
					ch++;
				}else{
				
					if((i+k)%2 == 1){
					
						printf("%c  ",ch);
					}else{
					
						printf("%c  ",ch+32);
					}
					ch--;
				}
			
			}
		}
		printf("\n");
	}
}
