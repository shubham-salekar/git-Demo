#include<stdio.h>
void main(){

	int x;
	printf("enter a num:\n");
	scanf("%d",&x);

	printf("divisors of %d are:\n",x);
	for(int i = 1; i<=x; i++){
	
		if(x%i == 0){
		
			printf("%d\n",i);
		
		}
	
	
	}


}

