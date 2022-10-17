
//prog5

#include<stdio.h>
void main(){
	int x;

	printf("Enter First no:\n");
	scanf("%d",&x);

	if(x%5==0 && x%11==0){
	
		printf("%d is divisible by 5 and 11\n",x);
	
	}else{
		printf("%d is not divisible by 5 and 11\n",x);
	
	}
	


}
