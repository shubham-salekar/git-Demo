
//prog4==minimum

#include<stdio.h>
void main(){
	int x;
	int y;

	printf("Enter First no:\n");
	scanf("%d",&x);

	printf("Enter Second no:\n");
	scanf("%d",&y);

	if(x<y){
	
		printf("%d  is min than %d\n",x,y);
	
	}else if(y<x){
		printf("%d is min than %d.\n",y,x);
	
	}else if(x==y){
	
		printf("both values are same :%d\n",x);
	}
	


}
