
#include<stdio.h>

void main(){

	int num;
	printf("Enter no. of rows\n");
	scanf("%d",&num);

	int count = 0;

	for(int i = 1; i<=num ; i++){

		if(num %i == 0){
		
			count++;
			if(count > 2){
			
				printf("%d is composite\n",i);
				break;
			}
		
		}
	}
}

