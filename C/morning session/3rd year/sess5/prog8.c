/*

Enter number of rows
4
         1  
      A  b  
   1  2  3  
A  b  C  d  

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){

		int num = 1;
	
		for(int j=1 ; j<=row-i ; j++){
		
			printf("   ");
		}
		for(int k=1 ; k<=i ; k++){
		
			if(i%2 == 1){
			
				printf("%d  ",num++);
			}else{
			
				if(k%2 ==1){
				
					printf("%c  ",num+64);
					num++;
				}else{
				
					printf("%c  ",num+96);
					num++;
				}
			}
		}
		printf("\n");
	}
}
