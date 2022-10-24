/*
enter num of rows
4
1	
1	4	
4	7	10	
10	13	16	19	
19	22	25	
25	28	
28	

*/

#include<stdio.h>

void main(){

	int row;
	printf("enter num of rows\n");
	scanf("%d",&row);

	int col;
	int num = 1;

	for(int i=1 ; i<= row*2-1 ; i++){

		if(i<=row){
		
			col = i;
			
		}else{
		
			col = row*2-i; 
		}
		for(int j = 1; j<=col ; j++){
		
			printf("%d\t",num);
			num+=3;

		}
		num-=3;
		printf("\n");
	}
}
