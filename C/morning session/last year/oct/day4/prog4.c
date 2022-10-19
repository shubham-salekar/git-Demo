
#include<stdio.h>
void main(){
						//incomplete
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
		
			if((i+k)%2 == 1){
			
				printf("%d ",var1);
			}
			else if((i+k)%2 == 0){
				
				printf("%c ",ch1);
			}
			ch1++;
		}
		printf("\n");
	
	}

}
