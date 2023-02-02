
// non tail rec : fact

#include<stdio.h>

int factorial(int x){

	static int fact = 1;

	fact = fact * x;

	if(x>1){
	
		factorial(--x);
	}else{
	
		printf("%d\n",fact);
	}

}
void main(){

	factorial(5);
}
