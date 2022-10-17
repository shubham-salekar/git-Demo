//prog 3 : print the first 10 , 3 digit  num


#include<stdio.h>

void main(){

	int x = 100;;

	printf("Enter first 3 digit  num:\n");
	scanf(" %d",&x);

	for (int i=1; i<=10 ; i++){
	
		printf(" %d\n",x);
		x++;
	}

}
