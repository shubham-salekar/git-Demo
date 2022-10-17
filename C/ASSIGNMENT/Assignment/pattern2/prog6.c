/*	
 *	= = = =
 *	$ $ $ $
 *	= = = =
 *	$ $ $ $
 */

#include<stdio.h>
void main(){
	int x;
	printf("enter no of row:");
	scanf("%d",&x);

	char var1 = '=';
	char var2 = '$';

	for(int i = 1; i<=x ; i++){
	
		for(int j = 1 ; j<=x ; j++){
			if(i%2==1){
				
				printf("%c ",var1);
			}
			else if(i%2 == 0){
			
				printf("%c ",var2);

			
			}

		}
		printf("\n");
	}


}
