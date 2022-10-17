
//prog8

#include<stdio.h>
void main(){
	char x;

	printf("Enter First Character:\n");
	scanf(" %c",&x);

	if(x>=65 && x<=90){
	
		printf(" %c is UPPERCASE \n",x);
	
	}else if(x>=97 && x<=122){
		printf(" %c is lowercase\n",x);
	
	}else{
	
		printf("invalid input.\n");
	}
	


}
