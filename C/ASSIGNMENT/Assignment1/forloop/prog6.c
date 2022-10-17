// factorial of given num

#include<stdio.h>

void main(){

	int x;
	printf("the facorial of:\n");
	scanf("%d",&x);

	int fact = 1;

	for(int i = x ; i>0 ; i--){
	
		fact = fact*x;
		x--;

	
	}
	printf("%d\n",fact);

}
