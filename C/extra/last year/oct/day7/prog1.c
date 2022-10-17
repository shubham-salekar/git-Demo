
#include<stdio.h>

void main(){
						//incomplete
	int row;
	printf("enter no.of rows\n");
	scanf("%d",&row);

	char ch1 = 'A';
	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<i ; j++){
		
			printf("  ");
		}

		for(int k=row ; k>=i ; k--){
		
			if(k%2==0){
			
				printf("%c ",ch1);
				ch1++;
			}else{
			
				printf("%c ",ch1+32);
				ch1++;
			}
		}
		ch1 = ch1-1;
		printf("\n");
	}
}
