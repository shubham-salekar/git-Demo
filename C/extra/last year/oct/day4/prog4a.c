/*

1 b 2 d 
  1 b 2 
    1 b 
      1 
*/

#include<stdio.h>
void main(){
						
	int row;
	printf("enter no, of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
		
		int var1 = 1;
		char ch1 = 'a';
	
		for(int j = 1; j<i ; j++){
		
			printf("  ");
		}
		for(int k=row ; k>=i ; k--){
		
			if(row%2 == 0){
			
				if(k%2 == 0){
			
					printf("%d ",var1);
					var1++;
			
				}else if(k%2 == 1){
			
					printf("%c ",ch1);
				}
				ch1++;
			}
			else{
				if(k%2 == 1){
			
					printf("%d ",var1);
					var1++;
			
				}else if(k%2 == 0){
			
					printf("%c ",ch1);
				}
				ch1++;
			}
		}
		printf("\n");
	
	}

}
