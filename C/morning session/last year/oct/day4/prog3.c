/*
	3 b 2 d 
	b 2 d 
	1 d 
	d 
*/

#include<stdio.h>					
void main(){

	int row;
	printf("enter no of rows\n");
	scanf("%d",&row);

	int var1 = 1;
	char ch1 = 'a';

	for(int i = 1 ; i<=row ; i++){
	
		var1 = row-i;
		ch1 = 'a'+i-1;

		for(int j = row ; j>=i ;j--){
		
			if(i%2 == 1){
			
				if((i+j)%2 == 1){
				
					printf("%d ",var1);
					ch1++;
					var1--;
				}
				else if((i+j)%2 == 0){
				
					printf("%c ",ch1);
					ch1++;
				}
				//var1--;

			}else{
				if((i+j)%2 == 1){
				
					printf("%d ",var1);
					ch1++;
					var1--;
				}
				else if((i+j)%2 == 0){
				
					printf("%c ",ch1);
					ch1++;
				}
				//var1--;
				
			}

			
		}
	
		printf("\n");	
	}
}
