
#include<stdio.h>

void main(){

	int x;
	
	printf("Enter a num:\n");
	scanf("%d",&x);

	if(x%3 == 0){
	
		printf("%d is multiple of 3.\n",x);
	
	}else{
	
		printf("%d is not multiple of 3.\n",x);
	
	}

}
