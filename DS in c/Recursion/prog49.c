
#include<stdio.h>

int fun(int n){

	if(n!=1){
	
		return fun(n-1) + n;
	}
	return 1;
}
void main(){

	int sum= fun(5);
	printf("sum = %d\n",sum);
}
