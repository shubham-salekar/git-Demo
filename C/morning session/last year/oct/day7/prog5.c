/*
	A 
	C B A 
	E D C B A 
	G F E 
	I 

*/
#include<stdio.h>
						//odd : ok
						//even : false
void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	char ch1 = 'A';
	int num = 2;

	int num2 = 2;
	for(int i=1 ; i<=row ; i++){

		if(i<=row/2 +1){
		
			for(int j=1 ; j<=(i*2-1) ; j++){
			
				printf("%c ",ch1);
				ch1--;
			}
		}else{
	
			for(int k=1 ; k<=row-num2 ; k++){
			
				printf("%c ",ch1);
				ch1--;
				
			}
			num2+=2;
			
		}
		ch1 = 'A'+num;
		num+=2;
		printf("\n");
	}
}
