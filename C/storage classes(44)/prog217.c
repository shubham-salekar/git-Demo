
// global variable

#include<stdio.h>

int x = 10;

void fun(){

	++x;
	printf("%d\n",x);

}
void main(){

	fun();
	fun();
	fun();
}
