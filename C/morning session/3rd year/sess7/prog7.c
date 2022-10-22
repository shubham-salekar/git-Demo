/*
Enter number of rows
4
			1	
		4	7	4	
	7	10	13	10	7	
10	13	16	19	16	13	10

*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter number of rows\n");
	scanf("%d",&row);

	int x =-1;

	for(int i=1 ; i<=row ; i++){

		int num = i*2+(x);
		
		for(int j=1 ; j<=row-i ; j++){
		
			printf("\t");
		}
		for(int k=1 ; k<= i*2-1 ; k++){
		
			if(k<i){
				printf("%d\t",num);
				num+=3;
			
			}else{
				printf("%d\t",num);
				num-=3;
			}
		}
		x++;
		printf("\n");
	
	}
}
