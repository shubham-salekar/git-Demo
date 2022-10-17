
#include<stdio.h>

void main(){

	int num;
	printf("enter a number:\n");
	scanf("%d",&num);

	printf("factors of %d are \n",num);
	for(int i = 1 ; i<=num ; i++){
	
		if(num%i == 0){
		
			printf("%d ",i);
		
		}

	
	}
	printf("\n");

}
