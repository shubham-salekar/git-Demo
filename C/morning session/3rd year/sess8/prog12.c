/*
 
Enter no. of rows
5
1	3	5	7	9	7	5	3	1	
	9	7	5	3	5	7	9	
		3	5	7	5	3	
			7	5	7	
				5	
*/

#include<stdio.h>

void main(){

	int row;
	printf("Enter no. of rows\n");
	scanf("%d",&row);

	int num = 1;
	int num1;	

	for(int i=1 ; i<=row ; i++){	
			
		for(int j=1 ; j<i ; j++){
		
			printf("\t");
		}

		for(int k=1 ; k<=row*2-i*2+1 ; k++){
		
			if(i%2==1){
				
				if(k<=row-i){
			
					printf("%d\t",num);
					num+=2;
					num1 = num;

				}else{
			
					printf("%d\t",num);
					num-=2;
				}
			}else{
			
				if(k<=row-i){
				
					printf("%d\t",num);
					num-=2;
					num1 = num;

				}else{
				
					printf("%d\t",num);
					num+=2;
				}
			}
				
		}
		num = num1;
		printf("\n");
	}
}
