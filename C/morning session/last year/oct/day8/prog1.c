
#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	char ch = 'A';

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<i ; j++){
		
			printf("  ");
		}
		for(int k=row ; k>=i ; k--){
		
			if(i%2 ==0){
			
				if(k%2==0){
				
					printf("%c ",ch);
					ch++;
				}else{
				
					printf("%c ",ch+32);
					ch++;
				}
			}else{
			
				if(k%2==1){
			       	
					printf("%c ",ch);
					ch--;

				}else{
				
					printf("%c ",ch+32);
					ch--;
				}
			}
		}
		ch = ch-1;
		printf("\n");
	}
}
