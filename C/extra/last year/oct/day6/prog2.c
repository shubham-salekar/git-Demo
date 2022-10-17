
#include<stdio.h>

void main(){
							//incomplete
	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	for(int i=1 ; i<=row ; i++){
	
		char ch1 = 'A'+row-i;

		for(int j = row-1 ; j>=i ; j--){
		
			printf("  ");
		}
		for(int k=1 ;k<=i ; k++){
		
			if(k%2 == 0){
			
				printf("%c ",ch1+32);
				ch1++;
			}
			else if( k%2 ==1){
			
				printf("%c ",ch1);
				ch1++;
			}
		}
		printf("\n");
	}
}
