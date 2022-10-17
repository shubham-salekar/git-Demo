//prog 2 : print the first 100 num


#include<stdio.h>

void main(){

	int x ;

	printf("Enter first num:\n");
	scanf(" %d",&x);

	for (int i=1; i<=100 ; i++){
	
		printf(" %d\n",x);
		x++;
	}

}
