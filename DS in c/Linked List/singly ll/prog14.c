#include<stdio.h>

void fun(int* *a){

	**a = **a+10;
	printf("%d\n",**a);

}
void main(){

	int x = 10;
	int *ptr = &x;

	fun(&ptr);
	
	printf("%d\n",x);
}
