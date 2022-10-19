/*
4 
3 3 
2 2 2 
1 1 1 1 
2 2 2 
3 3 
4 

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
			num = row -i +1;

		}else{
		
			col = row*2-i;
			num++;

		}
		for(int j=1 ; j<=col ; j++){
		
			printf("%d ",num);
		}
		printf("\n");
	}
}
