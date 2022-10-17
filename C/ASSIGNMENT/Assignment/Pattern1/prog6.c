/*
	$=$=
	$=$=
	$=$=
	$=$=
*/
	

#include<stdio.h>
void main(){

	int x ;
	printf("enter a size of row:");
	scanf("%d",&x);

	char var1 = '$';
	char var2 = '=';

	for(int i = 1; i<=x ; i++){
	
		for(int j = 1 ; j<=x ; j++){
		
			if(j%2 == 1){
			
				printf("%c ",var1);
			
			}else if(j%2 == 0){
			
				printf("%c ",var2);
			
			}
		
		}
		printf("\n");
	
	}

}
