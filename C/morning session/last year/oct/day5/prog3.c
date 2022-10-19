/*

3 d 2 c 
  d 2 c 
    1 d 
      d 
*/

#include<stdio.h>
void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i = 1 ; i<=row ; i++){

		int var1 = row-i;
		char ch1 = 'a'+row-1;

		for(int j = 1; j<i ; j++){
		
			printf("  ");
		
		}
		for(int k = row ; k>=i ; k--){
		
			if(i%2 == 1){
			
				if(k%2 == 0){
				
					printf("%d ",var1);
					var1--;
				}
				else{
				
					printf("%c ",ch1);
					ch1--;
				}
			}else{
				if(k%2 == 0){
				
					printf("%c ",ch1);
					ch1--;
				}
				else{
				
					printf("%d ",var1);
					var1--;
				}
			}
			

		}
		printf("\n");
	}
}
