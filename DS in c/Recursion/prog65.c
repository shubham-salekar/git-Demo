// fibanocci series

#include<stdio.h>

int fib(int n){
	
	int x = 0;
	int y = 1;
	int z;
	
	printf("%d %d ",x,y);

	for(int i=1 ; i<n ; i++){

		z=x+y;
		printf("%d ",z);
		x=y;
		y=z;
	}
	
}
void main(){

	fib(8-1);
}
