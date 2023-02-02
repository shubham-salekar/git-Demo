
#include<stdio.h>

int sum = 0;

void add(int n){

	if(n>0){
	
		sum = sum +n;
		printf("%d\n",n);
		add(--n);
	}
	printf("%d\n",sum);
}
void main(){

	add(5);
}
