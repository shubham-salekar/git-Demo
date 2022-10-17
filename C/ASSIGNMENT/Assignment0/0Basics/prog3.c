
//prog3

#include<stdio.h>
void main(){
	int x;
	int y;

	printf("Enter First no:\n");
	scanf("%d",&x);

	printf("Enter Second no:\n");
	scanf("%d",&y);

	if(x>y){
	
		printf("%d is greatest than %d.\n",x,y);
	
	}else if(x == y){
		printf("both same\n");
	
	}else if(y>x){
	
		printf("%d is greater than %d\n",y,x);
	
	}
	


}
