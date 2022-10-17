/*
			1	
		2	3	
	4	5	6	
7	8	9	10	
	11	12	13	
		14	15	
			16
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no.of rows\n");
	scanf("%d",&row);

	int var1 = 1;
	int space =1;

	for(int i = 1 ; i<=row ; i++){
	
		if(i<=row/2 +1){
		
			for(int j=row/2 ; j>=i ; j--){
			
				printf("\t");
			}
			for(int k=1 ; k<=i ; k++){
			
				printf("%d\t",var1);
				var1++;
			}
		}else{
		
			for(int j=1 ; j<=space ; j++){
			
				printf("\t");
			}
			for(int k=i ; k<=row ; k++){
			
				printf("%d\t",var1);
				var1++;
			}
			space++;
		}
		printf("\n");
	}
}
