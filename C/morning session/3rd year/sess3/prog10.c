/*

Enter num of rows 
4

10 
i h 
7 6 5 
d c b a 

*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	int num = row*2+2;
	char ch = 'a'+row*2+1;

	for(int i=1 ; i<=row ; i++){

		for(int j=1 ; j<=i ; j++){

			if(i%2 == 1){		
				
				printf("%d ",num);
				num--;
				ch--;

			}else{
			
				printf("%c ",ch);
				num--;
				ch--;
			}
		}

		printf("\n");

	}
}
