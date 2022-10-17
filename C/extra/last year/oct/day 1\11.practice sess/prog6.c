
#include<stdio.h>
void main(){

	int var1 = 'A';
	int var2 = 'a';

	int row;
	printf("enter row size");
	scanf("%d",&row);

	for(int i = 1 ; i<= row ; i++){

	//	var1 = var1 + row -i;	
	//	var2 = var2 + row -i;	

		for(int j = 1 ; j<=row ; j++){
		
			if(i%2 == 1){
			
				if((i+j)%2 == 0){
				
					printf("%c ",var1+row-j);
				
				}else if((i+j)%2 == 1){
				
					printf("%c ",var2+row-j);
				}
				
			}
			
			else if(i%2 == 0){
			
				if((i+j)%2 == 0){
				
					printf("%c ",var1+j-2);
			
				}else if((i+j)%2 == 1){
				
					printf("%c ",var2 + j-i);
				}
			
			}
		
		}
		printf("\n");
	var1++;
	var2++;

	}





}
