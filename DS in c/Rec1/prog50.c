
#include<stdio.h>

void fun(int x){

	printf("hello ");

	if(x!=1){
	
		fun(x-1);
	}
	printf("bye ");
}
void main(){

	fun(5);
}
