/*

*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no .of rows\n");
	scanf("%d",&row);

	int col;

	int num;

	for(int i=1 ; i<row*2 ; i++){

		if(i<=row){
		
			col = i;
			num = i;

		}else{
		
			col = row*2-i;
			num = col;

		}
		for(int j=1 ; j<=col ; j++){
		
			printf("%d ",num--);
		}
		printf("\n");
	}
}
