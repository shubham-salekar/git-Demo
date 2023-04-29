#include<stdio.h>

int fiboDemo(int n){

	if(n == 0)
		return 0;
	if(n == 1)
		return 1;

	
	return fiboDemo(n-1) + fiboDemo(n-2);

}
void main(){

	fiboDemo(10);
}

