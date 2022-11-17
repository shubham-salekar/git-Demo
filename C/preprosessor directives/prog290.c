
// Conditional preprocessing

#define add(x,y) x+y

#include<stdio.h>
//#define add(x,y) x+y

void main(){

	int x = 10;
	int y = 20;

	printf("%d\n",add(x,y));

//	#undef add
	
	printf("%d\n",add(x,y));


}
