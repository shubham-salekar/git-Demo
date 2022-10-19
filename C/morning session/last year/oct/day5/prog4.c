/*

5 
5 d 
5 d 4 
5 d 4 b 
5 d 4 b 3 

*/

#include<stdio.h>
void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	for(int i = 1 ; i<=row ; i++){
		
		int var1 = row ;
		char ch1 = 'a'+row-1;

		for(int k = 1 ; k<=i ; k++){
		
			if(k%2 == 1){
			
				printf("%d ",var1);
				var1--;
			}
			else{
			
				printf("%c ",ch1);
			}
			ch1--;		
		}
		printf("\n");
	}
}
